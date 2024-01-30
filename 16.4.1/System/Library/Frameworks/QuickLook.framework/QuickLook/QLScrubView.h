@class QLThumbnailView, NSString, NSMutableDictionary, QLPageNumberView, NSMutableArray;
@protocol QLScrubViewDataSource, QLScrubViewDelegate;

@interface QLScrubView : UIView <UIGestureRecognizerDelegate> {
    BOOL _needsThumbLayout;
    double _thumbOrigin;
    double _thumbEnd;
    double _thumbHeight;
    long long _pageCount;
    long long _selectedPage;
    NSMutableDictionary *_thumbViews;
    NSMutableArray *_visibleThumbIndexes;
    QLThumbnailView *_selectedThumbnailView;
    QLPageNumberView *_pageNumberLabel;
}

@property (weak) id<QLScrubViewDataSource> dataSource;
@property (weak) id<QLScrubViewDelegate> delegate;
@property (nonatomic) double topOffset;
@property (nonatomic) double bottomOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultWidth;

- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)reloadThumbnails;
- (void)_handleSwipAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_hidePageLabel;
- (void)_notifyPageChanged;
- (void)_removeThumbviews;
- (void)_showPageLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_thumbnailFrameForPageAtIndex:(long long)a0;
- (void)_updatePageLabelPosition;
- (void)_updateSelectedThumbnailView;
- (void)longTapReceived:(id)a0;
- (void)panReceived:(id)a0;
- (void)selectPageNumber:(long long)a0;
- (void)tapReceived:(id)a0;

@end
