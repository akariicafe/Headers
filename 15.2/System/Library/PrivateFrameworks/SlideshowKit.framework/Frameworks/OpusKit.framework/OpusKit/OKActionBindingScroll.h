@interface OKActionBindingScroll : OKActionBinding {
    unsigned long long _triggerLimit;
    unsigned long long _probability;
    BOOL _continuous;
}

@property (nonatomic) struct CGPoint { double x; double y; } offset;

+ (id)supportedSettings;

- (void)unload;
- (id)initWithSettings:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)settingObjectForKey:(id)a0;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;

@end
