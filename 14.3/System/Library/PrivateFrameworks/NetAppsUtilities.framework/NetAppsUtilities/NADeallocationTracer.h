@protocol NADeallocationTracerDelegate;

@interface NADeallocationTracer : NSObject

@property (nonatomic) id<NADeallocationTracerDelegate> delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;

@end
