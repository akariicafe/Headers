@class NSString, BSAbstractDefaultDomain, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface _BSDefaultObserver : NSObject <BSDefaultObserver> {
    BSAbstractDefaultDomain *_defaults;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_defaultsToObserve;
    id /* block */ _fireBlock;
    BOOL _invalidated;
    _Atomic unsigned int _debounceCounter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
