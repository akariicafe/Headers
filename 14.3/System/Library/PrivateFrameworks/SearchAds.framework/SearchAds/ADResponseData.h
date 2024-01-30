@class NSString, NSDictionary, ADInstallAttributionData;

@interface ADResponseData : NSObject

@property (readonly, copy, nonatomic) NSString *impressionID;
@property (readonly, copy, nonatomic) NSString *metadata;
@property (readonly, copy, nonatomic) NSString *lineItem;
@property (readonly, copy, nonatomic) NSString *algoID;
@property (readonly, copy, nonatomic) NSString *privacy;
@property (readonly, copy, nonatomic) NSString *templateType;
@property (readonly, copy, nonatomic) NSString *clientRequestID;
@property (readonly, copy, nonatomic) NSDictionary *format;
@property (readonly, copy, nonatomic) ADInstallAttributionData *installAttribution;

- (id)initWithDict:(id)a0;
- (void).cxx_destruct;

@end
