@class UITextView, NSString, HKDisplayType, UILabel;

@interface WDDisplayTypeDescriptionView : UIView <UITextViewDelegate> {
    HKDisplayType *_displayType;
    unsigned long long _style;
    UILabel *_descriptionHeadingLabel;
    UILabel *_descriptionLabel;
    UITextView *_attributionTextView;
    UILabel *_cautionaryLabel;
}

@property (nonatomic) BOOL showAttributionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)minimumHeightForStyle:(unsigned long long)a0;
+ (id)_metricsForStyle:(unsigned long long)a0;
+ (id)_descriptionHeadingFontForStyle:(unsigned long long)a0;
+ (id)_descriptionTextFontForStyle:(unsigned long long)a0;
+ (id)_attributionTextFontForStyle:(unsigned long long)a0;
+ (id)_cautionaryTextFontForStyle:(unsigned long long)a0;
+ (id)_descriptionHeadingColorForStyle:(unsigned long long)a0;
+ (id)_descriptionTextColorForStyle:(unsigned long long)a0;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void).cxx_destruct;
- (void)_setupUI;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateFont;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithDisplayType:(id)a0 showAttributionText:(BOOL)a1 style:(unsigned long long)a2;

@end
