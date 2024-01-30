@class UIView;

@interface UIAccessibilityOpaqueFocusState : NSObject

@property (weak, nonatomic) id element;
@property (nonatomic) BOOL hasFocus;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sceneRelativeFrame;
@property (retain, nonatomic) UIView *reusableView;
@property (nonatomic) BOOL hasBeenReused;

- (void).cxx_destruct;
- (id)description;

@end
