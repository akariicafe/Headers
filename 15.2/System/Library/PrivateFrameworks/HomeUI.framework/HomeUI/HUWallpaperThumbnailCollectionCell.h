@class NSString, UIImageView, UIImage, NSLayoutConstraint, UIDropInteraction;
@protocol HUWallpaperThumbnailCellDelegate;

@interface HUWallpaperThumbnailCollectionCell : UICollectionViewListCell <UIDropInteractionDelegate>

@property (retain, nonatomic) UIImageView *imageThumbnailView;
@property (retain, nonatomic) NSLayoutConstraint *imageWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageHeightConstraint;
@property (retain, nonatomic) UIDropInteraction *dropInteraction;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) long long contentMode;
@property (weak, nonatomic) id<HUWallpaperThumbnailCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
