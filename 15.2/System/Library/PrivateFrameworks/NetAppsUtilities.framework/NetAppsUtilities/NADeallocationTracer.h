@protocol NADeallocationTracerDelegate;

@interface NADeallocationTracer : NSObject

@property (nonatomic) id<NADeallocationTracerDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;

@end
