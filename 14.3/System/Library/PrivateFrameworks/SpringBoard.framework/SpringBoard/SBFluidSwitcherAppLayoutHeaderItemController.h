@class FBSDisplayIdentity, NSString, SBAppLayout, NSArray, NSMutableDictionary, NSMutableSet;

@interface SBFluidSwitcherAppLayoutHeaderItemController : NSObject <SBDeviceApplicationSceneHandleObserver, SBIconObserver, BSInvalidatable> {
    SBAppLayout *_appLayout;
    FBSDisplayIdentity *_displayIdentity;
    NSArray *_displayItems;
    NSMutableDictionary *_displayItemToIcon;
    NSMutableDictionary *_displayItemToLoadedImage;
    NSMutableDictionary *_displayItemToSceneHandle;
    NSMutableSet *_downloadingIcons;
    BOOL _invalidated;
}

@property (nonatomic, getter=isUsingDarkLabels) BOOL useDarkLabels;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleDidReplaceDownloadingIconNotification:(id)a0;
- (void).cxx_destruct;
- (void)_updateDisplayItemIcons;
- (void)dealloc;
- (void)iconImageDidUpdate:(id)a0;
- (void)_startTrackingDownloadingIcon:(id)a0;
- (id)_iconForDisplayItem:(id)a0;
- (void)sceneHandle:(id)a0 didChangeSceneTitle:(id)a1;
- (id)_computeHeaderItems;
- (id)initWithAppLayout:(id)a0 applicationSceneHandleProvider:(id)a1 displayIdentity:(id)a2 showCanvasTitles:(BOOL)a3;
- (void)_loadIconForDisplayItem:(id)a0;
- (void)invalidate;
- (void)_stopTrackingDownloadingIcon:(id)a0;
- (void)_performUpdateHandler;

@end
