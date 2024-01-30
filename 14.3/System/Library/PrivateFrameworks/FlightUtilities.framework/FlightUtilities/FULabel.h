@class NSString, NSAttributedString;

@interface FULabel : TLKLabel {
    NSString *_stringValue;
    NSAttributedString *_attributedStringValue;
    FULabel *_realAssociatedScalingLabel;
}

@property (copy) id /* block */ onTap;
@property (readonly, nonatomic) BOOL uppercase;
@property (readonly) BOOL useCurrentLocale;
@property (weak, nonatomic) FULabel *associatedScalingLabel;

- (void)setAssociatedLabel:(id)a0;
- (void)setAttributedText:(id)a0;
- (void).cxx_destruct;
- (void)setUppercase:(BOOL)a0 usingCurrentLocale:(BOOL)a1;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)performTap:(id)a0;
- (void)setText:(id)a0;
- (id)_associatedScalingLabel;
- (void)setStyleProvider:(id)a0 primaryStyle:(BOOL)a1;

@end
