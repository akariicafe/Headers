@interface TeaUI.ShineImageLayer : TeaUI.NonAnimatingLayer {
    void /* unknown type, empty encoding */ shineOptions;
    void /* unknown type, empty encoding */ shineImage;
    void /* unknown type, empty encoding */ shineOffset;
    void /* unknown type, empty encoding */ shineScale;
    void /* unknown type, empty encoding */ shineImageLayer;
}

+ (BOOL)needsDisplayForKey:(id)a0;

- (void)layoutSublayers;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLayer:(id)a0;

@end
