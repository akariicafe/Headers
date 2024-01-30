@interface _NAObserverProxy : NSObject

@property (readonly, weak, nonatomic) id weakObserver;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)initWithWeakObserver:(id)a0;

@end
