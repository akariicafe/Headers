@class UILabel, NSAttributedString, UIImage, UIImageView, PXBadgedThumbnailView, PXInboxTableViewCellLayoutCoordinator, PXRoundedCornerOverlayView, UIColor;
@protocol PXInboxModel;

@interface PXInboxTableViewCell : UITableViewCell

@property (class, readonly, nonatomic) UIImage *placeholderEmptyImage;
@property (class, readonly, nonatomic) UIColor *unseenHighlightColor;

@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) PXRoundedCornerOverlayView *cornerOverlayView;
@property (retain, nonatomic) PXBadgedThumbnailView *thumbnailView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (copy, nonatomic) id<PXInboxModel> model;
@property (retain, nonatomic) NSAttributedString *title;
@property (retain, nonatomic) NSAttributedString *subtitle;
@property (nonatomic, getter=isUnseen) BOOL unseen;
@property (retain, nonatomic) PXInboxTableViewCellLayoutCoordinator *layoutCoordinator;

+ (id)thumbnailBadgeImageForTintColor:(id)a0;
+ (void)preloadResources;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_updateTitle;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateTitleLabel;
- (void)prepareForReuse;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;

@end
