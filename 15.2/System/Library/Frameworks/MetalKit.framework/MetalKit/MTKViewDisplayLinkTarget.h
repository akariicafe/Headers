@class MTKView;

@interface MTKViewDisplayLinkTarget : NSObject

@property (weak, nonatomic) MTKView *target;

- (void)draw;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;

@end
