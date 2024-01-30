@class NSMapTable;
@protocol BLSHInactiveBudgetPolicing_Private;

@interface BLSHDateSpecifierModel : NSObject {
    id<BLSHInactiveBudgetPolicing_Private> _inactiveBudgetPolicy;
    NSMapTable *_environmentModels;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void).cxx_destruct;
- (void)clearSpecifiersForEnvironment:(id)a0;
- (id)initWithInactiveBudgetPolicy:(id)a0;
- (BOOL)missingAnySpecifiersInDateInterval:(id)a0 forPresentation:(id)a1;
- (id)missingIntervalsForMinimumInterval:(id)a0 requestInterval:(id)a1 ofPresentation:(id)a2;
- (void)purgeSpecifiersBefore:(id)a0;
- (void)registerSpecifiers:(id)a0 forDateInterval:(id)a1 environment:(id)a2;
- (id)updatesAfterSpecifier:(id)a0 coalesceFirstUpdateToNowDate:(id)a1 plusRenderEarlyEpsilon:(double)a2 untilGapOverDuration:(double)a3 coaelscingEpsilon:(double)a4 maximumUpdates:(long long)a5 lastValidDate:(id)a6 forPresentation:(id)a7 environmentFilter:(id /* block */)a8;

@end
