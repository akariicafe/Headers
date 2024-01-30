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
@property (readonly, copy, nonatomic) NSNumber *vppaSessionDurationInMillis;

- (id)_applicationProperties;
- (id)configurationResponseByReplacingUTSK:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_routes;
- (id)description;
- (id)serverRouteNamed:(id)a0;
- (id)_VPPAInfo;
- (id)_requiredRequestKVPMap;
- (id)requiredRequestKeyValuePairsForType:(id)a0;
- (id)utsc;
- (void).cxx_destruct;
- (BOOL)isValidIgnoringExpiration;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithServerResponseDictionary:(id)a0 expirationDate:(id)a1 environmentHash:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_utskProperties;
- (id)initWithDictionary:(id)a0;
- (id)_userProperties;
- (unsigned long long)hash;
- (id)_expirationDateFromResponse:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isValid;

@end
