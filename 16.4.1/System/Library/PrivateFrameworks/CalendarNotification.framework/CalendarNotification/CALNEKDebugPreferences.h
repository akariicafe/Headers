@interface CALNEKDebugPreferences : NSObject <CALNDebugPreferences>

@property (class, readonly, nonatomic) CALNEKDebugPreferences *sharedInstance;

@property (readonly, nonatomic) BOOL forceDisplayOfNewTravelAdvisoryHypotheses;

@end
