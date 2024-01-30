@interface NetworkQualityExecutionsConstraints : NSObject

@property (readonly) long long maxUploadFlows;
@property (readonly) long long minUploadFlows;
@property (readonly) long long maxDownloadFlows;
@property (readonly) long long minDownloadFlows;

+ (id)defaultConstraints;

- (void)parseFlowConstraints:(id)a0;

@end
