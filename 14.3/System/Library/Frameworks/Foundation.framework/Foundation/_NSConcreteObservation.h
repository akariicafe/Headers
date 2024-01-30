@class NSObject;
@protocol NSObserver, NSObservable;

@interface _NSConcreteObservation : NSObservation {
    NSObject<NSObservable> *_LHSobservable;
    NSObject<NSObserver> *_RHSobserver;
    id _observers[4];
}

- (void)_receiveBox:(id)a0;
- (void)remove;
- (void)dealloc;
- (void *)_observerStorageOfSize:(unsigned long long)a0;
- (id)initWithObservable:(id)a0 observer:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)finishObserving;
- (id)debugDescription;

@end
