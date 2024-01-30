@class UIKeyCommandDiscoverabilityHUDVisualStyle, UIFont, UILayoutGuide, NSArray;
@protocol UIKeyCommandDiscoverabilityHUDColumnViewDelegate;

@interface UIKeyCommandDiscoverabilityHUDColumnView : UIView {
    id<UIKeyCommandDiscoverabilityHUDColumnViewDelegate> _delegate;
    UIKeyCommandDiscoverabilityHUDVisualStyle *_visualStyle;
    UIFont *_baseFont;
    UILayoutGuide *_descriptionColumnLayoutGuide;
    UILayoutGuide *_modifiersColumnLayoutGuide;
    UILayoutGuide *_inputStringColumnLayoutGuide;
    NSArray *_descriptionViews;
    NSArray *_modifierViews;
    NSArray *_inputStringViews;
    NSArray *_constraints;
}

@property (nonatomic) double fontScaleFactor;

- (void).cxx_destruct;
- (void)setKeyCommands:(id)a0 withVisualStyle:(id)a1;
- (id)initWithDelegate:(id)a0;

@end
