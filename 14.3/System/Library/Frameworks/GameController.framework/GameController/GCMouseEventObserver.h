@protocol GCMouseEventObserverDelegate;

@interface GCMouseEventObserver : NSObject

@property (weak, nonatomic) id<GCMouseEventObserverDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;

@end
