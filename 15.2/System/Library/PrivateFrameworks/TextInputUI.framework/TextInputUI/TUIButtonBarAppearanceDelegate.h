@class UIColor, NSString, _UIBarButtonItemAppearanceStorage, TUISystemInputAssistantView, UIImageSymbolConfiguration;

@interface TUIButtonBarAppearanceDelegate : NSObject <_UIButtonBarAppearanceDelegate>

@property (weak, nonatomic) TUISystemInputAssistantView *systemInputAssistantView;
@property (readonly, nonatomic) _UIBarButtonItemAppearanceStorage *appearanceStorage;
@property (readonly, nonatomic) long long barType;
@property (readonly, nonatomic) BOOL compactMetrics;
@property (readonly, nonatomic) BOOL isRTL;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) BOOL centerTextButtons;
@property (readonly, nonatomic) double defaultEdgeSpacing;
@property (readonly, nonatomic) double defaultTextPadding;
@property (readonly, nonatomic) double backButtonMargin;
@property (readonly, nonatomic) double backButtonMaximumWidth;
@property (readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (id)initWithSystemInputAssistantView:(id)a0;
- (void).cxx_destruct;

@end
