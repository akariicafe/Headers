@class NSError, NSString, NSArray, PXStoryTransitionProducer, NSMutableArray, PXGEntityManager, PXStoryModel, PXStoryTransitionModel;
@protocol PXStoryTransitionSource;

@interface PXStoryTransitionController : PXStoryController <PXChangeObserver, PXStoryMutableTransitionController, PXStoryDiagnosticHUDContentProvider, PXTapToRadarDiagnosticProvider> {
    NSMutableArray *_activeClipTransitions;
    PXStoryTransitionProducer *_transitionProducer;
}

@property (readonly, weak, nonatomic) id<PXStoryTransitionSource> transitionSource;
@property (nonatomic) long long currentSegmentIdentifier;
@property (readonly, nonatomic) PXStoryTransitionModel *pendingTransitionModel;
@property (retain, nonatomic) NSError *currentError;
@property (retain, nonatomic) NSArray *interruptedTransitionErrorDescriptions;
@property (readonly, weak, nonatomic) PXStoryModel *model;
@property (readonly, nonatomic) struct { long long fromSegmentIdentifier; long long toSegmentIdentifier; } activeTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) PXGEntityManager *entityManager;

+ (BOOL)_isSupportedTransitionWithKind:(char)a0 forClipWithResourceKind:(long long)a1;

- (void)setActiveTransition:(struct { long long x0; long long x1; })a0;
- (void)performChanges:(id /* block */)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (id)initWithModel:(id)a0 transitionSource:(id)a1;
- (BOOL)_canStartTransitionWithKind:(char)a0;
- (void)_handleTransitionCompleted:(id)a0;
- (void)_interruptActiveTransitions;
- (void)_reportInterruptedTransitionForNewTransitionBetweenSegmentWithIdentifier:(long long)a0 andSegmentWithIdentifier:(long long)a1;
- (void)_startTransition:(id)a0;
- (void)_updateCurrentSegmentIdentifierIfNeeded;
- (void)_updatePendingTransitionModelWithSegmentTransitionInfo:(struct { long long x0; long long x1; })a0;
- (id)diagnosticErrorsByComponentForHUDType:(long long)a0;
- (id)diagnosticTextForHUDType:(long long)a0 displaySize:(struct CGSize { double x0; double x1; })a1;
- (void)enumerateClipIdentifiersForActiveTransitionsUsingBlock:(id /* block */)a0;
- (void)enumerateClipIdentifiersForPendingTransitionUsingBlock:(id /* block */)a0;
- (void)setCurrentSegmentIdentifier:(long long)a0 allowTransitions:(BOOL)a1;
- (void)setPendingTransitionModel:(id)a0;
- (void)startPendingTransitionIfNeeded;

@end
