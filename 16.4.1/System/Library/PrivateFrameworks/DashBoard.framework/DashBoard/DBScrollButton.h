@class UIImage;

@interface DBScrollButton : UIButton

@property (retain, nonatomic) UIImage *scrollImage;

+ (id)buttonWithDirection:(unsigned long long)a0;

- (void)_updateImage;
- (BOOL)canBecomeFocused;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
