@class NSString;
@protocol BSInvalidatable;

@interface SBDashBoardOrientationController : NSObject <CSOrientationUpdateControlling> {
    id<BSInvalidatable> _deferOrientationUpdatesAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
