@class NSArray;

@interface SBFView : UIView

@property (nonatomic) struct CGSize { double width; double height; } intrinsicContentSize;
@property (copy, nonatomic) NSArray *animatedLayerProperties;
@property (copy, nonatomic) id /* block */ didMoveToWindowHandler;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;

@end
