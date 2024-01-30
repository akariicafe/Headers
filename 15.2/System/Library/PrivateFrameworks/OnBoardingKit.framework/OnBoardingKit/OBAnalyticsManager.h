@class NSMutableArray;

@interface OBAnalyticsManager : NSObject

@property (retain, nonatomic) NSMutableArray *events;
@property BOOL shouldStashMetrics;

+ (id)sharedManager;

- (void)commit;
- (void)addEvent:(id)a0 withPayload:(id)a1;
- (void)logPresentationOfPrivacyLinkWithIdentifier:(id)a0;
- (void)logTapOnPrivacyLinkWithIdentifier:(id)a0;
- (void)addEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)logPresentationOfPrivacySplashWithIdentifier:(id)a0;
- (void)logPresentationOfPrivacyUnifiedAbout;

@end
