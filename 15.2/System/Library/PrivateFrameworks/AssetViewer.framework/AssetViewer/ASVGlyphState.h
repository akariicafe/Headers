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

- (void).cxx_destruct;
- (id)init;
- (struct { })computeQuaternionTarget;
- (void /* unknown type, empty encoding */)computeScaleTarget;
- (void /* unknown type, empty encoding */)computeTranslationTarget;
- (void)setQuaternionTarget:(struct { })a0;
- (void)setScaleTarget:(SEL)a0;
- (void)setTranslationTarget:(SEL)a0;

@end
