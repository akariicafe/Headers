@class LPPadding, LPPointUnit, LPTextViewStyle;

@interface LPCollaborationFooterStyle : NSObject

@property (readonly, retain, nonatomic) LPPadding *margin;
@property (readonly, retain, nonatomic) LPPadding *separatorMargin;
@property (readonly, retain, nonatomic) LPPadding *padding;
@property (retain, nonatomic) LPPointUnit *indicatorSpacing;
@property (retain, nonatomic) LPPointUnit *cornerRadius;
@property (readonly, nonatomic) LPTextViewStyle *options;
@property (readonly, nonatomic) LPTextViewStyle *handle;
@property (nonatomic) BOOL showSeparator;
@property (nonatomic) BOOL useFullWidth;
@property (nonatomic) BOOL useInlineIndicator;
@property (nonatomic) BOOL useFullWidthDuringSizing;

- (void).cxx_destruct;
- (id)initWithPlatform:(long long)a0 sizeClass:(unsigned long long)a1 fontScalingFactor:(double)a2;

@end
