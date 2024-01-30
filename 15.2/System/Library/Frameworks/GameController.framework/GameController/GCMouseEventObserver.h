@protocol GCMouseEventObserverDelegate;

@interface GCMouseEventObserver : NSObject

@property (weak, nonatomic) id<GCMouseEventObserverDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
