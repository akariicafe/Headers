@class NSString, UIImageView, UIImage, UIView, _MKUILabel, NSLayoutConstraint;

@interface MKTransitSystemCell : MKCustomSeparatorTableViewCell {
    UIImageView *_shieldImageView;
    _MKUILabel *_systemLabel;
    UIView *_disclosureButton;
    NSLayoutConstraint *_imageToLabelConstraint;
    NSLayoutConstraint *_systemLabelToTopConstraint;
    NSLayoutConstraint *_systemLabelToBottomConstraint;
}

@property (copy, nonatomic) NSString *systemName;
@property (retain, nonatomic) UIImage *systemArtwork;
@property (nonatomic) BOOL showDisclosureButton;
@property (nonatomic, getter=isExpanded) BOOL expanded;

- (void)_contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)infoCardThemeChanged;
- (void)_updateConstraintValues;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForExpandedState:(BOOL)a0 animating:(BOOL)a1;
- (void)setExpanded:(BOOL)a0 insideAnimation:(BOOL)a1;
- (id)_disclosureButton;
- (id)initWithReuseIdentifier:(id)a0;

@end
