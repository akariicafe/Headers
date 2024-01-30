@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration {
    int _shouldRespectOutputBlending;
}

@property (copy, nonatomic) NSString *backgroundType;
@property (nonatomic) BOOL effectShowsValue;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setShouldRespectOutputBlending:(BOOL)a0;
- (void)dealloc;
- (void)setSelectionType:(long long)a0;
- (id)description;
- (BOOL)shouldIgnoreForegroundColor;
- (BOOL)shouldRespectOutputBlending;

@end
