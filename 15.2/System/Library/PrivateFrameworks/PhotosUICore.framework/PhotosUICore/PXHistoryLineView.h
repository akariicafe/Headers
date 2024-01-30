@class UILabel, PXStateBadgeView;

@interface PXHistoryLineView : UIView {
    PXStateBadgeView *_stateBadgeView;
    UILabel *_reasonLabel;
}

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithHistoryLine:(id)a0;
- (void)setHistoryLine:(id)a0;

@end
