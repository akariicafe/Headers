@class NSString, UILabel;

@interface ASCredentialRequestInfoLabelSubPane : ASCredentialRequestSubPane {
    UILabel *_infoLabel;
}

@property (nonatomic) double marginInset;
@property (retain, nonatomic) NSString *text;

+ (id)_titleFont;
+ (id)_infoLabelWithString:(id)a0 labelType:(unsigned long long)a1;
+ (double)_infoLabelMarginInset;
+ (id)_fontForLabelType:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)addToStackView:(id)a0 withCustomSpacingAfter:(double)a1 context:(id)a2;
- (id)initWithString:(id)a0 labelType:(unsigned long long)a1;

@end
