@class LPPointUnit, LPPadding, LPTextRowStyle;

@interface LPVerticalTextStackViewStyle : NSObject <LPEmailCompatibleCaptionBarItemChild>

@property (retain, nonatomic) LPPointUnit *firstLineLeading;
@property (retain, nonatomic) LPPointUnit *lastLineDescent;
@property (readonly, nonatomic) LPTextRowStyle *aboveTopCaption;
@property (readonly, nonatomic) LPTextRowStyle *topCaption;
@property (readonly, nonatomic) LPTextRowStyle *bottomCaption;
@property (readonly, nonatomic) LPTextRowStyle *belowBottomCaption;
@property (nonatomic) unsigned int maximumNumberOfLines;
@property (nonatomic) BOOL shouldAlignToBaselines;
@property (readonly, retain, nonatomic) LPPadding *captionTextPadding;
@property (readonly, retain, nonatomic) LPPadding *emailCompatibleMargin;

- (void).cxx_destruct;
- (void)applyToAllTextViewStyles:(id /* block */)a0;
- (id)initWithPlatform:(long long)a0 sizeClass:(unsigned long long)a1 fontScalingFactor:(double)a2;

@end
