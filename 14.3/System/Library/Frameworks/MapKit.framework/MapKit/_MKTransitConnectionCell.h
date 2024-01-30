@class MKTransitInfoLabelView, NSLayoutConstraint, _MKUILabel, UIButton;
@protocol _MKTransitConnectionCellDelegate, GEOTransitConnectionInfo;

@interface _MKTransitConnectionCell : MKCustomSeparatorTableViewCell {
    _MKUILabel *_nameLabel;
    MKTransitInfoLabelView *_transitInfoLabel;
    UIButton *_button;
    NSLayoutConstraint *_nameLabelToTopConstraint;
    NSLayoutConstraint *_transitInfoToNameConstraint;
}

@property (retain, nonatomic) id<GEOTransitConnectionInfo> connectionInfo;
@property (weak, nonatomic) id<_MKTransitConnectionCellDelegate> delegate;

- (void)_contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_buttonSelected;
- (void)_updateConstraintValues;
- (id)initWithReuseIdentifier:(id)a0;

@end
