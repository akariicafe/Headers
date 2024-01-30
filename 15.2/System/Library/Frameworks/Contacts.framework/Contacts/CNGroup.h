@class NSString, NSData, NSDate;

@interface CNGroup : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    CNGroup *_snapshot;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *externalURI;
@property (readonly, copy, nonatomic) NSString *externalIdentifier;
@property (readonly, copy, nonatomic) NSData *externalRepresentation;
@property (readonly, copy, nonatomic) NSString *externalModificationTag;
@property (readonly, copy, nonatomic) NSString *externalUUID;
@property (readonly, copy, nonatomic) CNGroup *snapshot;
@property (readonly, nonatomic) int iOSLegacyIdentifier;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)localizedStringForKey:(id)a0;
+ (id)predicateForGroupsInContainerWithIdentifier:(id)a0;
+ (id)predicateForGroupWithNameMatching:(id)a0;
+ (id)predicateForGroupsWithIdentifiers:(id)a0;
+ (id)makeIdentifierString;
+ (id)makeIdentifier;
+ (id)predicateForGroupsWithNameMatching:(id)a0;
+ (id)identifierProvider;
+ (id)predicateForSubgroupsInGroupWithIdentifier:(id)a0;
+ (id)predicateForiOSLegacyIdentifier:(int)a0;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 name:(id)a1;
- (id)initWithIdentifier:(id)a0 name:(id)a1 creationDate:(id)a2 modificationDate:(id)a3 iOSLegacyIdentifier:(int)a4;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithGroup:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
