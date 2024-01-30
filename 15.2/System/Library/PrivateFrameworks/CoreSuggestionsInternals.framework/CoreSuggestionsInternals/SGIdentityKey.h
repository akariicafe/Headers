@class NSString;

@interface SGIdentityKey : NSObject <NSCopying> {
    NSString *_content;
}

@property (readonly, nonatomic) NSString *externalId;
@property (readonly, nonatomic) unsigned long long type;

+ (BOOL)isSupportedEntityType:(long long)a0;
+ (unsigned long long)identityTypeForKeyPart:(id)a0;
+ (id)keyForEmail:(id)a0;
+ (id)keyForNormalizedEmail:(id)a0;
+ (id)keyForNormalizedPhone:(id)a0;
+ (id)keyForInstantMessageAddress:(id)a0;
+ (id)keyForSocialProfile:(id)a0;
+ (id)keyForPersonHandle:(id)a0;
+ (id)keyForContactExternalId:(int)a0;
+ (id)keyForContactUniqueId:(id)a0;

- (id)emailAddress;
- (id)uniqueIdentifier;
- (id)serialize;
- (id)phone;
- (id)description;
- (BOOL)hasPhone;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)socialProfile;
- (id)initWithType:(unsigned long long)a0 content:(id)a1;
- (BOOL)hasEmailAddress;
- (id)initWithSerialized:(id)a0;
- (id)identityKey;
- (BOOL)isEqualToIdentityKey:(id)a0;
- (BOOL)hasInstantMessageAddress;
- (id)instantMessageAddress;
- (BOOL)hasSocialProfile;

@end
