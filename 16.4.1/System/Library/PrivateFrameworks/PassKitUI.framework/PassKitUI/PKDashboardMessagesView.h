@class NSString, UIImage, PKDashboardMessageCell, NSOrderedSet, NSMutableDictionary, PKDashboardMessageActionCell, PKAMSEnagementMessageCell, UIPageControl, UIScrollView;
@protocol PKDashboardMessagesViewDelegate;

@interface PKDashboardMessagesView : UIView <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate> {
    UIScrollView *_scrollView;
    NSMutableDictionary *_tablesViews;
    BOOL _isSmallDevice;
    double _currentWidth;
    PKDashboardMessageActionCell *_sampleButtonCell;
    PKDashboardMessageCell *_sampleMessageCell;
    PKAMSEnagementMessageCell *_sampleEngagementCell;
    UIImage *_dismissImage;
    unsigned long long _primaryIndex;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _insets;
    double _widthForLastSizeCache;
    double _maxTableViewHeight;
    double _actionCellHeight;
    UIPageControl *_pageControl;
}

@property (readonly, nonatomic) NSOrderedSet *messages;
@property (weak, nonatomic) id<PKDashboardMessagesViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (double)_actionCellHeightForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_configureActionCell:(id)a0 withMessage:(id)a1;
- (void)_configureEngagementCell:(id)a0 withMessage:(id)a1;
- (void)_configureMessageCell:(id)a0 withMessage:(id)a1 leftContentInset:(double)a2;
- (double)_endOfItemAtIndex:(unsigned long long)a0;
- (unsigned long long)_indexAtContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (double)_maxHeightForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_messageForTableView:(id)a0;
- (void)_pageControlChanged:(id)a0;
- (unsigned long long)_primaryIndexAtOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_reportCurrentMessageViewed;
- (double)_startOfItemAtIndex:(unsigned long long)a0;
- (void)_switchPrimaryIndexToIndex:(unsigned long long)a0;
- (void)_updateSizeCacheIfNecessary;
- (BOOL)isActionPresentedAsButtonCellForMessage:(id)a0;
- (void)updateWithMessages:(id)a0 currentIndex:(unsigned long long)a1;

@end
