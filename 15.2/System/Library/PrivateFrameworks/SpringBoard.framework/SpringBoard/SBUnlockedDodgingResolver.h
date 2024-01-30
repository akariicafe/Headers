@class _SBUnlockedDodgingWindow, SBDodgingResolverViewController, NSString, _SBUnlockedDodgingRootViewcontroller, SBDodgingTester;

@interface SBUnlockedDodgingResolver : NSObject <SBUIActiveOrientationObserver>

@property (retain, nonatomic) _SBUnlockedDodgingWindow *window;
@property (retain, nonatomic) _SBUnlockedDodgingRootViewcontroller *rootViewController;
@property (retain, nonatomic) SBDodgingTester *dodgingTester;
@property (readonly, nonatomic) SBDodgingResolverViewController *dodgingResolverViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
