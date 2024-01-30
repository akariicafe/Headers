@protocol GCKeyboardEventObserverDelegate;

@interface GCKeyboardEventObserver : NSObject

@property (weak, nonatomic) id<GCKeyboardEventObserverDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;

@end
