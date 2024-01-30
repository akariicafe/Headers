@class NSString, NTKGreenfieldAddWatchFaceManager;

@interface NTKGreenfieldAddWatchFaceForCLI : NSObject <NTKGreenfieldAddWatchFaceManagerDelegate> {
    NTKGreenfieldAddWatchFaceManager *_addWatchFaceManager;
    id /* block */ _completion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addWatchFaceManager:(id)a0 updateStateToWelcomeWithCanAddFaceDirectly:(BOOL)a1;
- (void)addWatchFaceManager:(id)a0 didFinishAddingFaceWithError:(id)a1;
- (void)addWatchFaceManager:(id)a0 updateStateToAddComplicationWithItemId:(id)a1 installMode:(long long)a2 skippedComplicationSlots:(id)a3;
- (void)addWatchFaceManager:(id)a0 updateStateToCompletedWithSkippedComplicationSlots:(id)a1 canRevisit:(BOOL)a2;
- (void)addWatchFaceManager:(id)a0 updateStateToComplicationsNotAvailableWithSlots:(id)a1 unavailableTitle:(id)a2 unavailableDescription:(id)a3;
- (void)addWatchFaceManager:(id)a0 updateStateToRevisitComplicationWithItemId:(id)a1 installMode:(long long)a2 skippedComplicationSlots:(id)a3;
- (void)addWatchFaceWithURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)didStartLoadingInAddWatchFaceManager:(id)a0;

@end
