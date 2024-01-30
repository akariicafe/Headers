@class NSLayoutConstraint;

@interface FM_Workaround_30408319_Button : UIButton

@property (retain, nonatomic) NSLayoutConstraint *fm_workaround_height_constraint;

- (void)setAttributedTitle:(id)a0 forState:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;

@end
