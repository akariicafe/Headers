@interface CAMReviewButton : UIButton

@property (nonatomic, setter=_setNumberOfCaptures:) unsigned long long _numberOfCaptures;

+ (id)_sharedNumberOfCapturesFormatter;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_commonCAMReviewButtonInitialization;
- (id)_localizedTitleForNumberOfCaptures;

@end
