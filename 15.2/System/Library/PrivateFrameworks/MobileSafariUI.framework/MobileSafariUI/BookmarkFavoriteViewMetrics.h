@class UIFont;

@interface BookmarkFavoriteViewMetrics : NSObject {
    UIFont *_cachedTitleLabelFont;
    UIFont *_cachedDescriptionLabelFont;
    double _cachedDescriptionLabelHeight;
    struct { double titleLabelHeight; double firstBaselineOffset; double lastBaselineOffset; } _metricsPerIconSize[2];
}

- (void).cxx_destruct;

@end
