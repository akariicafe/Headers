@protocol ASVGlyphStateDelegate;

@interface ASVGlyphState : NSObject {
    struct { void /* unknown type, empty encoding */ vector; } _quaternionTarget;
    void /* unknown type, empty encoding */ _scaleTarget;
    void /* unknown type, empty encoding */ _translationTarget;
    unsigned long long _snapState;
}

@property (weak, nonatomic) id<ASVGlyphStateDelegate> delegate;
@property (nonatomic) unsigned long long snapState;
@property (readonly, nonatomic) struct { } quaternionTarget;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ scaleTarget;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ translationTarget;

- (id)init;
- (void).cxx_destruct;
- (struct { })computeQuaternionTarget;
- (void)setQuaternionTarget:(struct { })a0;
- (void /* unknown type, empty encoding */)computeScaleTarget;
- (void)setScaleTarget:(SEL)a0;
- (void /* unknown type, empty encoding */)computeTranslationTarget;
- (void)setTranslationTarget:(SEL)a0;

@end
