@class UILabel, PXStateBadgeView;

@interface PXHistoryLineView : UIView {
    PXStateBadgeView *_stateBadgeView;
    UILabel *_reasonLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithHistoryLine:(id)a0;
- (void)setHistoryLine:(id)a0;

@end
