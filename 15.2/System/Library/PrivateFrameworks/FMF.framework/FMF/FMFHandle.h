@class NSString, NSArray, NSDictionary, NSNumber;

@interface FMFHandle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *serverId;
@property (copy, nonatomic) NSNumber *dsid;
@property (nonatomic) BOOL isFamilyMember;
@property (copy, nonatomic) NSArray *aliasServerIds;
@property (copy, nonatomic) NSArray *invitationSentToIds;
@property (copy, nonatomic) NSDictionary *expiresByGroupId;
@property (copy, nonatomic) NSString *hashedDSID;
@property (nonatomic, getter=isPending) BOOL pending;
@property (copy, nonatomic) NSNumber *trackingTimestamp;
@property (copy, nonatomic) NSNumber *favoriteOrder;
@property (copy, nonatomic) NSString *_prettyNameInternal;
@property (nonatomic) long long idsStatus;
@property (nonatomic) BOOL reachable;
@property (copy, nonatomic) NSString *qualifiedIdentifier;

+ (id)handleWithId:(id)a0;
+ (id)handleWithId:(id)a0 serverId:(id)a1;
+ (id)familyHandleWithId:(id)a0 dsid:(id)a1;

- (void)abPreferencesDidChange;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isPhoneNumber;
- (id)recordId;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)sanitizePhoneNumber:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)prettyName;
- (long long)prettyNameCompare:(id)a0;
- (void)addressBookDidChange;
- (id)comparisonIdentifier;
- (void)setICloudId:(id)a0;
- (BOOL)isSharingThroughGroupId:(id)a0;
- (void)clearFavoriteOrder;

@end
