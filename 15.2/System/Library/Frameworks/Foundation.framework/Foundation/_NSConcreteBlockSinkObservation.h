@class NSObject;
@protocol NSObservable;

@interface _NSConcreteBlockSinkObservation : NSObservation {
    NSObject<NSObservable> *_LHSobservable;
    id /* block */ _block;
    int _tag;
}

- (id)initWithObservable:(id)a0 blockSink:(id /* block */)a1 tag:(int)a2;
- (void)remove;
- (void)_receiveBox:(id)a0;
- (void)finishObserving;
- (id *)_observerStorage;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)debugDescription;
- (void *)_observerStorageOfSize:(unsigned long long)a0;

@end
