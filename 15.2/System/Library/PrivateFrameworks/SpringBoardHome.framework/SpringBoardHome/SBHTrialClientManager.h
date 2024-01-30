@class NSString, TRIClient;

@interface SBHTrialClientManager : NSObject

@property (retain, nonatomic) TRIClient *trialClient;
@property (retain, nonatomic) NSString *homeScreenNamespace;

- (void).cxx_destruct;
- (id)init;
- (void)immediatelyFetchSpringBoardHomeNamespace;
- (BOOL)widgetDiscoverabilityGoSwitchEnabled;

@end
