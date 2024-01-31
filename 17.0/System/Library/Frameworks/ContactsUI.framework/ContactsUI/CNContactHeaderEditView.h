@class _TtC10ContactsUI37CNAvatarPosterPairCollectionPreWarmer, CNMutableContact, SBSRemoteAlertHandle, CNSNaPSetupFlowManager, NSString, _TtC10ContactsUI32CNHostingPosterSnapshotImageView, UIButton;

@interface CNContactHeaderEditView : CNContactHeaderView <CNSNaPSetupFlowManagerDelegate, SBSRemoteAlertHandleObserver> {
    BOOL _needsPosterCarouselPreWarming;
}

@property (nonatomic) struct CGSize { double width; double height; } maxButtonSize;
@property (retain, nonatomic) UIButton *editButton;
@property (retain, nonatomic) _TtC10ContactsUI32CNHostingPosterSnapshotImageView *editingPosterView;
@property (retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle;
@property (retain, nonatomic) CNSNaPSetupFlowManager *flowManager;
@property (retain, nonatomic) _TtC10ContactsUI37CNAvatarPosterPairCollectionPreWarmer *carouselPreWarmer;
@property (retain, nonatomic) CNMutableContact *editingWallpaperContact;
@property (nonatomic) BOOL isOutOfProcess;
@property (nonatomic) BOOL allowsEditPhoto;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makePhotoViewWithShouldAllowTakePhotoAction:(BOOL)a0 shouldAllowImageDrops:(BOOL)a1 monogramOnly:(BOOL)a2;
+ (id)sizeAttributesShowingNavBar:(BOOL)a0;
+ (id)contactHeaderViewWithContact:(id)a0 shouldAllowTakePhotoAction:(BOOL)a1 monogramOnly:(BOOL)a2 isOutOfProcess:(BOOL)a3 delegate:(id)a4;
+ (id)contactHeaderViewWithContact:(id)a0 shouldAllowTakePhotoAction:(BOOL)a1 showingNavBar:(BOOL)a2 monogramOnly:(BOOL)a3 isOutOfProcess:(BOOL)a4 delegate:(id)a5;

- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)updateConstraints;
- (double)minHeight;
- (void)editButtonTapped;
- (double)maxHeight;
- (void).cxx_destruct;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)setPresenterDelegate:(id)a0;
- (void)layoutSubviews;
- (BOOL)hasPhoto;
- (void)didTapPhotoView;
- (BOOL)photoIsModified;
- (void)setUpEditButton;
- (void)setUpPosterView;
- (void)updateFontSizes;
- (void)_presentRemotePosterAndAvatarEditorWithMode:(long long)a0;
- (void)calculateLabelSizesIfNeeded;
- (double)defaultMaxHeight;
- (void)didFinishUsing;
- (void)editAvatar;
- (void)editPoster;
- (BOOL)hasWallpaper;
- (id)initWithContact:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 shouldAllowTakePhotoAction:(BOOL)a2 delegate:(id)a3 showingNavBar:(BOOL)a4 monogramOnly:(BOOL)a5 isOutOfProcess:(BOOL)a6;
- (id)initWithContact:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 shouldAllowTakePhotoAction:(BOOL)a2 showingNavBar:(BOOL)a3 monogramOnly:(BOOL)a4 isOutOfProcess:(BOOL)a5 delegate:(id)a6;
- (id)mutableContact;
- (id)posterPlaceholderImage;
- (void)preWarmPosterAndAvatarEditor;
- (void)presentAvatarPickerWithImageData:(id)a0;
- (void)presentPosterAndAvatarEditorWithMode:(long long)a0;
- (void)reloadDataPreservingChanges:(BOOL)a0;
- (void)saveContactPhoto;
- (void)setAllowsEditPhoto:(BOOL)a0 preservingChanges:(BOOL)a1;
- (BOOL)shouldShowPoster;
- (BOOL)shouldUseStaticHeader;
- (void)snapAvatarPosterEditorFromFlowManager:(id)a0 didUpdateContact:(id)a1 withVisualIdentity:(id)a2;
- (double)staticEditingHeaderHeight;
- (double)staticHeaderPhotoAvatarAndPosterTopMargin;
- (double)staticHeaderPhotoAvatarOnlyTopMargin;
- (double)staticHeaderPhotoHeight;
- (double)staticHeaderPhotoTopMargin;
- (double)staticHeaderPhotoTopMarginOffset;
- (void)updateContactWithEditedPropertyItem:(id)a0;
- (void)updateEditButtonTitle;
- (void)updatePendingWallpaperContactWithEditedPropertyItem:(id)a0;
- (void)updatePosterViewImage;
- (void)updatePosterVisibility;
- (void)updateSizeDependentAttributes;
- (void)updateWithContacts:(id)a0;
- (BOOL)wallpaperIsModified;

@end
