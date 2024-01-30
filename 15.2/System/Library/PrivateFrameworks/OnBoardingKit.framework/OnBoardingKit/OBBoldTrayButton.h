@class NSNumber, NSAttributedString;

@interface OBBoldTrayButton : OBTrayButton

@property (retain, nonatomic) NSNumber *buttonStateRequiredHeight;
@property (retain, nonatomic) NSAttributedString *cachedDisableStateTitle;

+ (id)boldButton;

- (void)updateConfiguration;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setEnabled:(BOOL)a0;
- (void)hidesBusyIndicator;
- (id)boldConfiguration;
- (void)showsBusyIndicator;
- (void).cxx_destruct;
- (void)tintColorDidChange;

@end
