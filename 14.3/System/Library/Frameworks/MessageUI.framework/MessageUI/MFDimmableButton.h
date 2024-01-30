@interface MFDimmableButton : UIButton

@property (nonatomic) BOOL stickyHiddenValue;
@property (readonly, nonatomic) unsigned long long autohidePreference;
@property (nonatomic) BOOL hidesWhenDimmedIfNotSelected;
@property (nonatomic, getter=isDimmed) BOOL dimmed;

- (void)setHidden:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (void)_updateDimmedHidingIfNecessary;
- (void)_setHidden:(BOOL)a0 external:(BOOL)a1;
- (unsigned long long)state;

@end
