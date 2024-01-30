@class NSObject;
@protocol NSObserver, NSObservable;

@interface _NSConcreteObservation : NSObservation {
    NSObject<NSObservable> *_LHSobservable;
    NSObject<NSObserver> *_RHSobserver;
    id _observers[4];
}

- (id)initWithObservable:(id)a0 observer:(id)a1;
- (void)remove;
- (void)_receiveBox:(id)a0;
- (void)finishObserving;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)debugDescription;
- (void *)_observerStorageOfSize:(unsigned long long)a0;

@end
