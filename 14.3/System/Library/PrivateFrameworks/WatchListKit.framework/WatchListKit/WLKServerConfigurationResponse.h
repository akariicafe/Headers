@class NSString, NSDictionary, NSURL, NSDate, NSNumber;

@interface WLKServerConfigurationResponse : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) unsigned long long environmentHash;
@property (readonly, nonatomic) NSDictionary *endpointsDictionary;
@property (readonly, nonatomic) NSDictionary *requiredRequestKeyValuePairsDictionary;
@property (readonly, nonatomic) NSString *vppaStatusString;
@property (readonly, nonatomic) long long vppaStatus;
@property (readonly, nonatomic) NSURL *playActivityURL;
@property (readonly, nonatomic) NSDictionary *features;
@property (readonly, copy, nonatomic) NSString *utsk;
@property (readonly, nonatomic, getter=isActiveUser) BOOL activeUser;
@property (readonly, copy, nonatomic) NSNumber *vppaSessionDurationInMillis;

- (void).cxx_destruct;
- (id)utsc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isValid;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithServerResponseDictionary:(id)a0 expirationDate:(id)a1 environmentHash:(unsigned long long)a2;
- (BOOL)isValidIgnoringExpiration;

@end
