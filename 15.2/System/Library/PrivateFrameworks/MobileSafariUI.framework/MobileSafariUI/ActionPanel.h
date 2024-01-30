@class NSString, TabDocument, ReloadActivity;
@protocol AddBookmarkActivityDelegate, ActionPanelDelegate;

@interface ActionPanel : _SFActivityViewController <_SFActivityDelegate, AddBookmarkActivityDelegate> {
    id<AddBookmarkActivityDelegate> _activityDelegate;
    ReloadActivity *_reloadActivity;
    long long _menuStyle;
    BOOL _containsDownloadsActivity;
}

@property (weak, nonatomic) id<ActionPanelDelegate> delegate;
@property (readonly, nonatomic) TabDocument *tabDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createActivityItemProviderCollectionForTabDocument:(id)a0;

- (void)_performActivity:(id)a0;
- (void)_prepareActivity:(id)a0 completion:(id /* block */)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_reload;
- (void)addBookmarkActivityFailedToAcquireBookmarkLock:(id)a0;
- (BOOL)addBookmarkActivityCanSaveBookmarkChanges:(id)a0;
- (void).cxx_destruct;
- (void)setSharingURL:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)excludedActivityTypes;
- (void)_executeActivity;
- (void)activityDidComplete:(id)a0 withReturnedItems:(id)a1 success:(BOOL)a2;
- (id)webViewForCustomizationController:(id)a0;
- (BOOL)isContentObscuredByDigitalHealthForCustomizationController:(id)a0;
- (BOOL)isDisplayingQuickLookDocumentForCustomizationController:(id)a0;
- (BOOL)isReaderAvailableForCustomizationController:(id)a0;
- (BOOL)isShowingReaderForCustomizationController:(id)a0;
- (long long)provenanceForSafariActivity:(id)a0;
- (void)_didExpandShareSheet;
- (void)_sendAnalyticsForAction:(long long)a0;
- (void)_preparePostToSocialNetwork:(id)a0;
- (void)_prepareMail:(id)a0 completion:(id /* block */)a1;
- (id)initWithTabDocument:(id)a0 activityDelegate:(id)a1 preferredSharingStyle:(long long)a2 menuStyle:(long long)a3;
- (id)downloadsViewController;
- (void)updateReloadActivity;

@end
