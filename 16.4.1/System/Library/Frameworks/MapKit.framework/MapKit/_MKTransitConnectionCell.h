@class MKTransitInfoLabelView, NSLayoutConstraint, _MKUILabel, UIButton;
@protocol _MKTransitConnectionCellDelegate, GEOTransitConnectionInfo;

@interface _MKTransitConnectionCell : MKCustomSeparatorCell {
    _MKUILabel *_nameLabel;
    MKTransitInfoLabelView *_transitInfoLabel;
    UIButton *_button;
    NSLayoutConstraint *_nameLabelToTopConstraint;
    NSLayoutConstraint *_transitInfoToNameConstraint;
}

@property (retain, nonatomic) id<GEOTransitConnectionInfo> connectionInfo;
@property (weak, nonatomic) id<_MKTransitConnectionCellDelegate> delegate;

- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_buttonSelected;
- (void)_updateConstraintValues;

@end
