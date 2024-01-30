@class CPSAbridgableLabel, UIStackView, UIImageView, CPRouteChoice, UIView, CPSInvisibleButton;
@protocol CPSRouteRowInteracting;

@interface CPSRouteRowView : UIView

@property (readonly, nonatomic) UIImageView *checkmarkView;
@property (readonly, nonatomic) CPSAbridgableLabel *title;
@property (readonly, nonatomic) CPSAbridgableLabel *detail;
@property (retain, nonatomic) UIView *focusBackground;
@property (retain, nonatomic) CPSInvisibleButton *rowButton;
@property (weak, nonatomic) id<CPSRouteRowInteracting> interactionDelegate;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) CPRouteChoice *representedRouteChoice;
@property (nonatomic, getter=isSelected) BOOL selected;

- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateAppearance;
- (void)handleRowSelection:(id)a0;

@end
