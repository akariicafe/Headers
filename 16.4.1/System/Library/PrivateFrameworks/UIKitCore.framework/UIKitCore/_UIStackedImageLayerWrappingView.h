@protocol CALayerDelegate;

@interface _UIStackedImageLayerWrappingView : UIView

@property (weak, nonatomic) id<CALayerDelegate> actionDelegate;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
