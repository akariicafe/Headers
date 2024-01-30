@interface BWTrackedSurface : NSObject

@property (readonly, nonatomic) struct __IOSurface { } *surface;
@property (readonly, nonatomic) id /* block */ handler;
@property (nonatomic) int clientUseCount;
@property (nonatomic) BOOL owningPixelBufferDeallocated;

- (void)dealloc;
- (id)initWithSurface:(struct __IOSurface { } *)a0 handler:(id /* block */)a1;

@end
