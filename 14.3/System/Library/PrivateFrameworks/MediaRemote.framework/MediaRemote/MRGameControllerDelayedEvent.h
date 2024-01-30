@interface MRGameControllerDelayedEvent : NSObject

@property (nonatomic) unsigned long long lastDownEvent;
@property (copy, nonatomic) id /* block */ sendEventBlock;

- (void).cxx_destruct;
- (void)send;

@end
