@protocol CALayerDelegate;

@interface _UIStackedImageLayerWrappingView : UIView

@property (weak, nonatomic) id<CALayerDelegate> actionDelegate;

- (void).cxx_destruct;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)dealloc;

@end
