@class VibrantLabelView, _SFSiteIconView, BookmarkFavoriteViewMetrics, UIView, WebBookmark;

@interface BookmarkFavoriteView : UIView {
    UIView *_iconTouchHighlightView;
    VibrantLabelView *_titleLabel;
    VibrantLabelView *_descriptionLabel;
    BOOL _grabbed;
    BOOL _highlighted;
    BOOL _usesVibrantEffect;
    WebBookmark *_bookmark;
    _SFSiteIconView *_iconView;
    unsigned long long _childCount;
    BookmarkFavoriteViewMetrics *_metrics;
    long long _iconSize;
    double _spaceBetweenIconAndLabelBaseline;
}

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;

@end
