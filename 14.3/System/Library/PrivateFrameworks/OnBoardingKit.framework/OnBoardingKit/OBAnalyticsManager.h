@class NSMutableArray;

@interface OBAnalyticsManager : NSObject

@property (retain, nonatomic) NSMutableArray *events;
@property BOOL shouldStashMetrics;

+ (id)sharedManager;

- (void)commit;
- (void)addEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)logPresentationOfPrivacyUnifiedAbout;
- (void)logPresentationOfPrivacySplashWithIdentifier:(id)a0;
- (void)addEvent:(id)a0 withPayload:(id)a1;
- (void)logTapOnPrivacyLinkWithIdentifier:(id)a0;
- (void)logPresentationOfPrivacyLinkWithIdentifier:(id)a0;

@end
