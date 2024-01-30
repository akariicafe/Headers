@class NSMutableSet;

@interface MSPHistoryContainer : MSPContainer {
    NSMutableSet *_dependents;
}

+ (id)sharedLocalContainer;
+ (id)sharedRemoteContainer;

- (void).cxx_destruct;
- (void)addDependent:(id)a0;
- (id)queryWithDelegate:(id)a0;
- (void)removeDependent:(id)a0;
- (void)_processNewEditedContents:(id)a0;
- (void)_processNewLoadedContents:(id)a0;
- (void)_commitEditWithFinalContents:(id)a0 context:(id)a1 completion:(id /* block */)a2;

@end
