@class NSString, NSDictionary, NSDate, NSNumber;

@interface WLKServerConfigurationResponse : NSObject <WLKCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) unsigned long long environmentHash;
@property (readonly, nonatomic) NSDictionary *requiredRequestKeyValuePairsDictionary;
@property (readonly, nonatomic) NSString *vppaStatusString;
@property (readonly, nonatomic) long long vppaStatus;
@property (readonly, nonatomic) NSDictionary *features;
@property (readonly, copy, nonatomic) NSString *utsk;
@property (readonly, nonatomic, getter=isActiveUser) BOOL activeUser;
@property (readonly, nonatomic, getter=isFavoritesSyncEnabled) BOOL favoritesSyncEnabled;
@property (readonly, copy, nonatomic) NSNumber *vppaSessionDurationInMillis;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)utsc;
- (id)description;
- (void).cxx_destruct;
- (id)_routes;
- (id)_applicationProperties;
- (id)_userProperties;
- (id)_utskProperties;
- (id)_VPPAInfo;
- (id)_expirationDateFromResponse:(id)a0;
- (id)_requiredRequestKVPMap;
- (id)_requiredRequestKVPMap:(id)a0;
- (id)configurationResponseByReplacingUTSK:(id)a0;
- (id)initWithServerResponseDictionary:(id)a0 expirationDate:(id)a1 environmentHash:(unsigned long long)a2;
- (BOOL)isValidIgnoringExpiration;
- (id)requiredRequestKeyValuePairsDictionary:(id)a0;
- (id)requiredRequestKeyValuePairsForType:(id)a0;
- (id)serverRouteNamed:(id)a0;

@end
