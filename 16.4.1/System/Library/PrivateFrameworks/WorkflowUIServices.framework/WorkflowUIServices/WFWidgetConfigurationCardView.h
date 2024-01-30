@class UILayoutGuide, MTStylingProvidingSolidColorView, NSString, UIView, MTVisualStylingProvider, WFWidgetConfigurationCardHeaderView;
@protocol WFWidgetConfigurationCardViewDelegate;

@interface WFWidgetConfigurationCardView : UIView <WFWidgetConfigurationCardHeaderViewDelegate>

@property (readonly, nonatomic) MTStylingProvidingSolidColorView *backgroundView;
@property (readonly, nonatomic) UILayoutGuide *contentViewGuide;
@property (readonly, nonatomic) WFWidgetConfigurationCardHeaderView *headerView;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<WFWidgetConfigurationCardViewDelegate> delegate;
@property (nonatomic) double widgetDescriptionTallScriptCompensatedSpacing;
@property (readonly, nonatomic) MTVisualStylingProvider *strokeProvider;
@property (readonly, nonatomic) MTVisualStylingProvider *fillProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 contentView:(id)a1;
- (void)setContentView:(id)a0 stretchToFit:(BOOL)a1;
- (void)widgetConfigurationCardHeaderViewDidRequestToClose:(id)a0;

@end
