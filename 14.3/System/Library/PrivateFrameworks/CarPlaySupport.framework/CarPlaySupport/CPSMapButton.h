@class CPMapButton;

@interface CPSMapButton : CPSButton

@property (retain, nonatomic) CPMapButton *mapButton;

+ (id)buttonWithCPMapButton:(id)a0;

- (float)charge;
- (void).cxx_destruct;
- (void)setCharge:(float)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateButtonImages;

@end
