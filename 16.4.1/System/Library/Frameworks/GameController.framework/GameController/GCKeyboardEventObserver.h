@protocol GCKeyboardEventObserverDelegate;

@interface GCKeyboardEventObserver : NSObject

@property (weak, nonatomic) id<GCKeyboardEventObserverDelegate> delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
