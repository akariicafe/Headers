@class NSDictionary, UIFont, NSArray;
@protocol HFDynamicFormattingValue, NACancelable;

@interface HUDynamicFormattingLabel : UILabel

@property (retain, nonatomic) id<NACancelable> formattedValueObservationCancellationToken;
@property (retain, nonatomic) UIFont *preferredFontForCurrentSize;
@property (retain, nonatomic) id<HFDynamicFormattingValue> dynamicFormattingValue;
@property (copy, nonatomic) NSDictionary *defaultAttributes;
@property (copy, nonatomic) NSArray *preferredFonts;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)_updateFormattedValueObservation;
- (void)_updateFormattedValueIncludingFont:(BOOL)a0;
- (void)_updatePreferredFontIncludingValue:(BOOL)a0;
- (id)_formattedValueWithFont:(id)a0;

@end
