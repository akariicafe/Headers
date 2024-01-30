@class NSString;

@interface SBDashBoardNotificationPresenter : NSObject <CSNotificationPresenting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentModalBannerAndExpandForNotificationRequest:(id)a0;

@end
