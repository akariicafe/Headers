@class PLCloudSharedComment, NSString, NSCache, PUPhotoCommentEntryView, PLManagedAsset, PHAsset, UITableView;
@protocol PUCommentsTableDataControllerDelegate;

@interface PUCommentsTableDataController : NSObject <PLCloudCommentsChangeObserver, PUPhotoCommentEntryViewDelegate, UITableViewDelegate, UITableViewDataSource> {
    NSCache *_commentsHeightCache;
    PUPhotoCommentEntryView *_entryView;
    BOOL _hasPendingChanges;
}

@property (retain, nonatomic) PLManagedAsset *managedAsset;
@property (retain, nonatomic) PLCloudSharedComment *justInsertedComment;
@property (readonly, nonatomic) UITableView *tableView;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) BOOL shouldUseCompactCommentSeparators;
@property (weak, nonatomic) id<PUCommentsTableDataControllerDelegate> delegate;
@property (readonly, nonatomic) double minimumHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)photoCommentEntryViewShouldEndEditing:(id)a0;
- (void)photoCommentEntryViewDidBeginEditing:(id)a0;
- (void)photoCommentEntryViewHeightDidChange:(id)a0;
- (void)photoCommentEntryViewWillBeginEditing:(id)a0;
- (void)photoCommentEntryViewDidEndEditing:(id)a0;
- (void)_updateFirstResponder;
- (BOOL)_isAssetOwnerSectionVisible;
- (long long)_smileCommentSection;
- (long long)_assetOwnerCommentSection;
- (long long)_postCommentSection;
- (long long)_textCommentSection;
- (id)_currentEntryView;
- (void)_scrollToComment:(id)a0 animated:(BOOL)a1;
- (double)_heightForComment:(id)a0 forWidth:(double)a1 forInterfaceOrientation:(long long)a2;
- (BOOL)_canPostCommentWithText:(id)a0 localizedFailureDescription:(id *)a1;
- (void)_postCommentWithText:(id)a0;
- (void)_fontCacheDidChange:(id)a0;
- (void)_validateAndPostComment:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 performAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)dealloc;
- (void)cloudCommentsDidChange:(id)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (id)_commentText;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithTableView:(id)a0;

@end
