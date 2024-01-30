@protocol GCMouseEventObserverDelegate;

@interface GCMouseEventObserver : NSObject

@property (weak, nonatomic) id<GCMouseEventObserverDelegate> delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
