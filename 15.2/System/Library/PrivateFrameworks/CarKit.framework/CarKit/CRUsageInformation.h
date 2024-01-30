@class CRCarKitServiceClient;

@interface CRUsageInformation : NSObject

@property (retain, nonatomic) CRCarKitServiceClient *serviceClient;
@property (readonly, nonatomic) BOOL shouldSuggestCarPlayTips;

- (void).cxx_destruct;
- (id)init;

@end
