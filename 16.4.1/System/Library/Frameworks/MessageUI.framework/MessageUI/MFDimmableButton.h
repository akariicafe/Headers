@interface MFDimmableButton : UIButton

@property (nonatomic) BOOL stickyHiddenValue;
@property (readonly, nonatomic) unsigned long long autohidePreference;
@property (nonatomic) BOOL hidesWhenDimmedIfNotSelected;
@property (nonatomic, getter=isDimmed) BOOL dimmed;

- (unsigned long long)state;
- (void)setSelected:(BOOL)a0;
- (void)setHidden:(BOOL)a0;
- (void)_setHidden:(BOOL)a0 external:(BOOL)a1;
- (void)_updateDimmedHidingIfNecessary;

@end
