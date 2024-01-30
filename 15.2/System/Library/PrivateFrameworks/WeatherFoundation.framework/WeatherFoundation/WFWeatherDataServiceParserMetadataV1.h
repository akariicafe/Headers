@class NSString, WFLocation, NSDate, NSURL;

@interface WFWeatherDataServiceParserMetadataV1 : NSObject

@property (copy, nonatomic) NSDate *readDate;
@property (copy, nonatomic) NSDate *expireDate;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) WFLocation *location;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *providerName;
@property (copy, nonatomic) NSURL *providerLogoURL;
@property (nonatomic) long long dataOrigination;
@property (nonatomic) BOOL temporarilyUnavailable;

- (void).cxx_destruct;

@end
