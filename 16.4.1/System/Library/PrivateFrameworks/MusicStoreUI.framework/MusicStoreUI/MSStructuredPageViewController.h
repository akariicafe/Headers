@class SUSegmentedControl, SUAudioPlayer, NSIndexPath, SUPlayerStatus;

@interface MSStructuredPageViewController : SUStructuredPageGroupedViewController {
    SUSegmentedControl *_inlineSegmentedControl;
    NSIndexPath *_previewIndexPath;
    SUAudioPlayer *_previewPlayer;
    SUPlayerStatus *_previewStatus;
}

- (void)applicationDidEnterBackground;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)setSkLoading:(BOOL)a0;
- (BOOL)canDisplaySectionGroup:(id)a0;
- (BOOL)canSelectRowAtIndexPath:(id)a0;
- (BOOL)handleSelectionForIndexPath:(id)a0 tapCount:(long long)a1;
- (BOOL)purchaseItemAtIndexPath:(id)a0;
- (void)reloadWithStorePage:(id)a0 forURL:(id)a1;
- (id)setDisplayedSectionGroup:(id)a0;
- (BOOL)_handleInlinePreviewForIndexPath:(id)a0;
- (BOOL)_handleMediaPreviewForIndexPath:(id)a0;
- (BOOL)_handlePreviewForIndexPath:(id)a0;
- (void)_playerStatusChangeNotification:(id)a0;
- (void)_setPreviewStatus:(id)a0 forIndexPath:(id)a1 animated:(BOOL)a2;
- (void)_stopPreviewPlayback;

@end
