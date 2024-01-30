@class NSSet, NSArray;

@interface MTUuidQueryObserver : MTBaseQueryObserver

@property (retain, nonatomic) NSSet *uuidSet;
@property (retain, nonatomic) NSArray *uuidOrder;

- (void).cxx_destruct;
- (void)notifyObservers;
- (void)startObserving;
- (void)controllerDidChangeContent:(id)a0;
- (id)addResultsChangedHandler:(id /* block */)a0;

@end
