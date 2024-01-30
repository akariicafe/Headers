@class NSString, PXSharedAlbumInvitationView, UILabel, PXFeedInvitationSectionInfo, PXSharedAlbumHeaderView;

@interface PUFeedInvitationCell : PUFeedCell <PXSharedAlbumInvitationViewDelegate>

@property (retain, nonatomic) PXSharedAlbumHeaderView *headerView;
@property (retain, nonatomic) PXSharedAlbumInvitationView *invitationView;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) PXFeedInvitationSectionInfo *invitationSectionInfo;
@property (nonatomic) BOOL useInPopover;
@property (nonatomic) BOOL showHeader;
@property (nonatomic) BOOL showFooter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (void)prepareForReuse;
- (void)_updateDate;
- (id)_delegate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateFooter;
- (struct CGSize { double x0; double x1; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 updateSubviewFrames:(BOOL)a1;
- (void)sharedAlbumInvitationView:(id)a0 didAccept:(BOOL)a1;
- (void)sharedAlbumInvitationViewDidReportAsJunk:(id)a0;
- (void)sharedAlbumInvitationView:(id)a0 presentViewController:(id)a1;
- (void)_updateInvitationView;
- (void)_updateHeaderView;
- (void)_updateColors;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
