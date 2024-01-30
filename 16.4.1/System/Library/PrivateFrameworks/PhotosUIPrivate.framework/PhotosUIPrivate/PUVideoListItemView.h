@class NSString, NSArray, PHImageRequestOptions, UIImage, UIImageView, NSLocale, NSDateFormatter, UILabel;

@interface PUVideoListItemView : UIView {
    UIImageView *_videoThumbnailView;
    NSLocale *_locale;
    NSDateFormatter *_dateFormatter;
    BOOL _needsUpdateConstraints;
    BOOL _isPerformingUpdates;
}

@property (retain, nonatomic) UIImage *videoThumbnail;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *sizeInGB;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (copy, nonatomic, setter=_setConstraints:) NSArray *constraints;
@property (readonly, nonatomic) PHImageRequestOptions *_imageRequestOptions;
@property (readonly, nonatomic) UIImageView *videoThumbnailView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_dateFormatter;
- (void)_updateConstraintsIfNeeded;
- (void)_invalidateConstraints;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)_currentLocale;
- (id)_titleFromDate:(id)a0;
- (id)_createTextLabel;
- (id)_subtitleForAsset:(id)a0;
- (BOOL)isSubtitleDisplayable;
- (void)updateItemViewWithAsset:(id)a0;

@end
