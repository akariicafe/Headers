@class NSString, NSDictionary, NSDate, NSNumber;

@interface WLKEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *canonicalID;
@property (readonly, nonatomic) NSString *legID;
@property (readonly, nonatomic) NSString *externalPlayableID;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSString *serviceID;
@property (readonly, nonatomic) NSString *externalServiceID;
@property (readonly, nonatomic) unsigned long long airingType;
@property (readonly, nonatomic) NSString *airingTypeString;
@property (readonly, nonatomic) NSDate *canonicalStartDate;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSNumber *cleanupTime;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
