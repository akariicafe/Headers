@class MTKView;

@interface MTKViewDisplayLinkTarget : NSObject

@property (weak, nonatomic) MTKView *target;

- (id)initWithTarget:(id)a0;
- (void)draw;
- (void).cxx_destruct;

@end
