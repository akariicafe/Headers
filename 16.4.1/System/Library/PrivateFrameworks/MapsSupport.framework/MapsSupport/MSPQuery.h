@class NSArray, _MSPQueryState, NSString, NSObject, MSPQuerySource;
@protocol OS_dispatch_queue;

@interface MSPQuery : NSObject <MSPQuerySourceObserver> {
    _MSPQueryState *_lastState;
    MSPQuerySource *_source;
}

@property (retain, getter=_lastState, setter=_setLastState:) _MSPQueryState *lastState;
@property (readonly, getter=_visibleState) _MSPQueryState *visibleState;
@property (readonly) NSArray *contents;
@property (readonly, copy, nonatomic) id /* block */ changeHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *changeHandlerQueue;
@property (readonly, nonatomic) NSArray *unmappedContents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithSource:(id)a0;
- (void).cxx_destruct;
- (void)_didChangeSourceWithNewState:(id)a0 context:(id)a1 inContainer:(id)a2;
- (id)originalIdentifierForObject:(id)a0;
- (id)originalIdentifierForObjectAtIndex:(unsigned long long)a0;
- (void)setChangeHandler:(id /* block */)a0 queue:(id)a1;

@end
