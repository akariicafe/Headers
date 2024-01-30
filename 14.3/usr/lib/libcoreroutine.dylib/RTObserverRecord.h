@interface RTObserverRecord : NSObject

@property (weak, nonatomic) id observer;
@property (nonatomic) SEL selector;

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 selector:(SEL)a1;

@end
