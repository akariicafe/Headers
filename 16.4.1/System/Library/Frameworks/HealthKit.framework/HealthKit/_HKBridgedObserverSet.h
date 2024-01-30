@class HKObserverSet;

@interface _HKBridgedObserverSet : NSObject

@property (retain, nonatomic) id bridgedObserver;
@property (retain, nonatomic) HKObserverSet *observers;

- (void).cxx_destruct;

@end
