@class NSString;
@protocol _SBUIWidgetHost;

@interface _SBUIWidgetViewController : UIViewController <_SBUIWidgetHost>

@property (copy, nonatomic) NSString *widgetIdentifier;
@property (weak, nonatomic) id<_SBUIWidgetHost> widgetHost;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredViewSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setVisibleWidgetsIDs:(id)a0;
- (void)requestLaunchOfURL:(id)a0;
- (void)invalidatePreferredViewSize;
- (void)hostWillPresent;
- (void)hostDidPresent;
- (void)hostWillDismiss;
- (void)hostDidDismiss;

@end
