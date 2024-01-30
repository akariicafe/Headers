@class MPAVItem, MPCPlaybackEngine, NSMutableSet, NSString, MPCMediaFoundationTranslator;
@protocol MPCExternalPlaybackRouter;

@interface MPCErrorControllerImplementation : NSObject <MFErrorController>

@property (weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly, nonatomic) MPCMediaFoundationTranslator *translator;
@property (retain, nonatomic) NSMutableSet *failedItemsIdentifiers;
@property (retain, nonatomic) id<MPCExternalPlaybackRouter> externalPlaybackRouter;
@property (retain, nonatomic) MPAVItem *lastItemUsedForErrorResolution;
@property (copy, nonatomic) NSString *preferredFirstContentItemID;
@property (nonatomic) BOOL itemsHavePlayed;

- (void).cxx_destruct;
- (void)reset;
- (void)resolveError:(id)a0 forItem:(id)a1 completion:(id /* block */)a2;
- (void)reportCriticalError:(id)a0 forItem:(id)a1;
- (id)initWithPlaybackEngine:(id)a0 translator:(id)a1 externalPlaybackRouter:(id)a2;
- (void)_playbackFailedWithError:(id)a0 item:(id)a1 canResolve:(BOOL)a2 proposedResolution:(long long)a3 completion:(id /* block */)a4;
- (long long)_resolutionForPlaybackError:(id)a0 item:(id)a1;
- (void)_notifyObserversForError:(id)a0 item:(id)a1;
- (BOOL)canHandleFirstItemFailure;
- (BOOL)isFirstItemFailure:(id)a0 item:(id)a1;
- (BOOL)isQueueLoadingFailure:(id)a0;
- (BOOL)isUnrecoverableAssetLoadingError:(id)a0;
- (BOOL)isAssetUnavailableFailure:(id)a0;
- (BOOL)shouldHandleFirstItemFailure:(id)a0 item:(id)a1;

@end
