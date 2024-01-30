@interface HUCCModuleExpandingTransition : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } expandedSize;
@property (readonly, nonatomic) BOOL expanding;

- (id)initWithExpandingState:(BOOL)a0 expandedSize:(struct CGSize { double x0; double x1; })a1;

@end
