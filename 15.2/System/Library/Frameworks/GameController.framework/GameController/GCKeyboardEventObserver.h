@protocol GCKeyboardEventObserverDelegate;

@interface GCKeyboardEventObserver : NSObject

@property (weak, nonatomic) id<GCKeyboardEventObserverDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
