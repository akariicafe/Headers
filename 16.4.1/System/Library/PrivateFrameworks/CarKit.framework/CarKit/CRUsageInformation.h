@class CRCarKitServiceClient;

@interface CRUsageInformation : NSObject

@property (retain, nonatomic) CRCarKitServiceClient *serviceClient;
@property (readonly, nonatomic) BOOL shouldSuggestCarPlayTips;

- (id)init;
- (void).cxx_destruct;

@end
