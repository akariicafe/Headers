@class NSString, PXSharedAlbumInvitationView, PXGadgetSpec, PXFeedInvitationSectionInfo, PXSharedAlbumHeaderView;
@protocol PXGadgetDelegate;

@interface PXSharedAlbumInvitationGadget : UIViewController <PXSharedAlbumInvitationViewDelegate, PXSettingsKeyObserver, PXGadget>

@property (retain, nonatomic) PXSharedAlbumHeaderView *headerView;
@property (retain, nonatomic) PXSharedAlbumInvitationView *invitationView;
@property (nonatomic) BOOL loadedContentData;
@property (retain, nonatomic) PXFeedInvitationSectionInfo *invitationSectionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;

+ (void)preloadResources;

- (id)px_gridPresentation;
- (id)contentViewController;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)init;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)_attemptToNavigateToSharedAlbum:(id)a0 hostingViewController:(id)a1;
- (struct CGSize { double x0; double x1; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 updateSubviewFrames:(BOOL)a1;
- (void)_updateInvitationView;
- (void)sharedAlbumInvitationView:(id)a0 didAccept:(BOOL)a1;
- (void)sharedAlbumInvitationView:(id)a0 presentViewController:(id)a1;
- (void)sharedAlbumInvitationViewDidReportAsJunk:(id)a0;
- (id)uniqueGadgetIdentifier;

@end
