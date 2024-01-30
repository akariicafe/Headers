@class NSArray, NSString, UIView, NSMutableArray;
@protocol FCUIActivityDisplaying;

@interface FCUIActivityListContentView : UIView <FCUIContentSizeCategoryAdjusting> {
    NSMutableArray *_outgoingActivityViews;
    NSArray *_purgeableActivityViews;
    BOOL _headerViewValid;
    BOOL _footerViewValid;
}

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *footerView;
@property (nonatomic, getter=isFooterPinnedToBottom) BOOL footerPinnedToBottom;
@property (copy, nonatomic) NSArray *activityViews;
@property (retain, nonatomic) UIView<FCUIActivityDisplaying> *compactActivityView;
@property (nonatomic) struct CGSize { double width; double height; } collapsedSize;
@property (nonatomic, getter=isContentDetached) BOOL contentDetached;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subviewFramesInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFitsCollapsedToPill:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_contentSizeCategoryAdjustingViews;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_sizeThatFits:(struct CGSize { double x0; double x1; })a0 collapsedToPill:(BOOL)a1 includingFooter:(BOOL)a2 forceMeasurement:(BOOL)a3;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;

@end
