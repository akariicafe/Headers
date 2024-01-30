@class CHSWidgetMetrics, CHSWidget, NSString, NSArray, UIViewController;

@interface CSSessionItemViewController : UIViewController <CSAdjunctItemHosting>

@property (retain, nonatomic) CHSWidgetMetrics *widgetMetrics;
@property (retain, nonatomic) CHSWidget *widget;
@property (retain, nonatomic) UIViewController *widgetViewController;
@property (nonatomic) double containerCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)_canShowWhileLocked;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void).cxx_destruct;
- (id)_newWidgetViewController;

@end
