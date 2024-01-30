@class NSString;

@interface _UNNotificationContentExtensionVendorViewControllerView : UIView <UIScrollViewDelayedTouchesBeganGestureRecognizerClient>

@property (readonly, nonatomic) BOOL delaysContentTouches;
@property (readonly, nonatomic, getter=_touchDelayForScrollDetection) double touchDelayForScrollDetection;
@property (readonly, nonatomic, getter=_scrollHysteresis) double scrollHysteresis;
@property (readonly, nonatomic, getter=_canScrollX) BOOL canScrollX;
@property (readonly, nonatomic, getter=_canScrollY) BOOL canScrollY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)touchesShouldBegin:(id)a0 withEvent:(id)a1 inContentView:(id)a2;

@end
