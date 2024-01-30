@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration {
    int _shouldRespectOutputBlending;
}

@property (copy, nonatomic) NSString *backgroundType;
@property (nonatomic) BOOL effectShowsValue;

- (void)setShouldRespectOutputBlending:(BOOL)a0;
- (void)setSelectionType:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldIgnoreForegroundColor;
- (void)dealloc;
- (id)init;
- (id)description;
- (BOOL)shouldRespectOutputBlending;

@end
