@class UIFont, LPTextViewStyle;

@interface LPQuotedTextViewStyle : LPTextViewStyle <NSCopying>

@property (retain, nonatomic) UIFont *longPullQuoteFont;
@property (nonatomic) unsigned int maximumLinesToConsiderShort;
@property (nonatomic) BOOL showQuoteIndicator;
@property (nonatomic) BOOL showCharacterLimitIndicator;
@property (readonly, retain, nonatomic) LPTextViewStyle *characterLimitIndicatorStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)adjustedForString:(id)a0;
- (id)initWithPlatform:(long long)a0 fontScalingFactor:(double)a1;

@end
