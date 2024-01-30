@class NSString;
@protocol RERelevanceEngineObserver;

@interface _RERelevanceEngineObserverWrapper : NSObject <RERelevanceEngineObserver> {
    struct { unsigned char implementsPerformBatchUpdate : 1; unsigned char implementsReloadElement : 1; unsigned char implementsRemoveElement : 1; unsigned char implementsInsertElement : 1; unsigned char implementsMoveElement : 1; unsigned char implementsElementIsVisible : 1; unsigned char implementsRelevanceUpdate : 1; unsigned char implementsRelevanceUpdateBegan : 1; unsigned char implementsRelevanceUpdateFinished : 1; } _observerCallbacks;
}

@property (readonly, weak, nonatomic) id<RERelevanceEngineObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;
- (void)relevanceEngine:(id)a0 didInsertElement:(id)a1 atPath:(id)a2;
- (void)relevanceEngine:(id)a0 didMoveElement:(id)a1 fromPath:(id)a2 toPath:(id)a3;
- (void)relevanceEngine:(id)a0 didReloadElement:(id)a1 atPath:(id)a2;
- (void)relevanceEngine:(id)a0 didRemoveElement:(id)a1 atPath:(id)a2;
- (void)relevanceEngine:(id)a0 didUpdateRelevanceForElement:(id)a1;
- (BOOL)relevanceEngine:(id)a0 isElementAtPathVisible:(id)a1;
- (void)relevanceEngine:(id)a0 performBatchUpdateBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)relevanceEngineDidBeginUpdatingRelevance:(id)a0;
- (void)relevanceEngineDidFinishUpdatingRelevance:(id)a0;

@end
