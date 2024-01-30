@class UIColor, NSString, UIButtonConfiguration, UIView;

@interface SBUISystemApertureButtonContentProvider : NSObject <SBUISystemApertureContentViewProviding, SBUISystemApertureContentColorStyling>

@property (copy, nonatomic) UIButtonConfiguration *buttonConfiguration;
@property (readonly, nonatomic) UIView *providedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIColor *contentColor;

- (void).cxx_destruct;
- (id)_providedView;
- (id)initWithButtonConfiguration:(id)a0 action:(id)a1;
- (id)initWithDefaultSymbolActionConfigurationWithAction:(id)a0;
- (id)initWithDefaultTextActionConfigurationWithAction:(id)a0;

@end
