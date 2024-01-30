@class NSString, ATXModeEntityScore;

@interface ATXContactModeEntity : NSObject <ATXModeEntityProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *rawIdentifier;
@property (retain, nonatomic) NSString *cnContactId;
@property (retain, nonatomic) NSString *stableContactIdentifier;
@property (retain, nonatomic) ATXModeEntityScore *scoreMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cnContactIdsOfFavoriteContacts;
+ (id)vipContactEmailAddresses;

- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonDict;
- (id)initWithDisplayName:(id)a0 rawIdentifier:(id)a1 cnContactId:(id)a2 stableContactIdentifier:(id)a3;
- (id)initWithDisplayName:(id)a0 rawIdentifier:(id)a1 cnContactId:(id)a2;
- (BOOL)isFavoriteContactGivenCNContactIdsOfFavorites:(id)a0;
- (BOOL)isVIPContactGivenVIPs:(id)a0;

@end
