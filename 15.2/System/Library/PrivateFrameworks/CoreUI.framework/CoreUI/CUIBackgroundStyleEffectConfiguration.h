@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration {
    int _shouldRespectOutputBlending;
}

@property (copy, nonatomic) NSString *backgroundType;
@property (nonatomic) BOOL effectShowsValue;

- (void)setShouldRespectOutputBlending:(BOOL)a0;
- (void)setSelectionType:(long long)a0;
- (id)description;
- (BOOL)shouldRespectOutputBlending;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)shouldIgnoreForegroundColor;

@end
