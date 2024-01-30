@class NSArray;

@interface SBFView : UIView

@property (nonatomic) struct CGSize { double width; double height; } intrinsicContentSize;
@property (copy, nonatomic) NSArray *animatedLayerProperties;
@property (copy, nonatomic) id /* block */ didMoveToWindowHandler;

- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)didMoveToWindow;

@end
