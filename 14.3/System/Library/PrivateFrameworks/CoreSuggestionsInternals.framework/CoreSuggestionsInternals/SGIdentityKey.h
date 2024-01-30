@class NSString;

@interface SGIdentityKey : NSObject <NSCopying> {
    NSString *_content;
}

@property (readonly, nonatomic) NSString *externalId;
@property (readonly, nonatomic) unsigned long long type;

+ (id)keyForNormalizedEmail:(id)a0;
+ (id)keyForInstantMessageAddress:(id)a0;
+ (id)keyForNormalizedPhone:(id)a0;
+ (id)keyForSocialProfile:(id)a0;
+ (BOOL)isSupportedEntityType:(long long)a0;
+ (id)keyForContactUniqueId:(id)a0;
+ (unsigned long long)identityTypeForKeyPart:(id)a0;
+ (id)keyForPersonHandle:(id)a0;
+ (id)keyForContactExternalId:(int)a0;
+ (id)keyForEmail:(id)a0;

- (id)initWithSerialized:(id)a0;
- (id)emailAddress;
- (id)serialize;
- (id)initWithType:(unsigned long long)a0 content:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasEmailAddress;
- (unsigned long long)hash;
- (id)uniqueIdentifier;
- (id)description;
- (id)instantMessageAddress;
- (id)phone;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasSocialProfile;
- (BOOL)hasInstantMessageAddress;
- (id)socialProfile;
- (BOOL)hasPhone;
- (BOOL)isEqualToIdentityKey:(id)a0;
- (id)identityKey;

@end
