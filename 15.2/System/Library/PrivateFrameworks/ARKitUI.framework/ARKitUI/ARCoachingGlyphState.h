@protocol ARCoachingGlyphStateDelegate;

@interface ARCoachingGlyphState : NSObject {
    struct { void /* unknown type, empty encoding */ vector; } _quaternionTarget;
    void /* unknown type, empty encoding */ _scaleTarget;
    unsigned long long _snapState;
}

@property (weak, nonatomic) id<ARCoachingGlyphStateDelegate> delegate;
@property (nonatomic) unsigned long long snapState;
@property (readonly, nonatomic) struct { } quaternionTarget;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ scaleTarget;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ topPlaneTranslationTarget;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ bottomPlaneTranslationTarget;
@property (nonatomic) BOOL isVertical;

- (void).cxx_destruct;
- (id)init;
- (struct { })computeQuaternionTarget;
- (void /* unknown type, empty encoding */)computeScaleTarget;
- (void)setQuaternionTarget:(struct { })a0;
- (void)setScaleTarget:(SEL)a0;
- (void /* unknown type, empty encoding */)computeTopPlaneTranslationTarget;
- (void)setTopPlaneTranslationTarget:(SEL)a0;
- (void /* unknown type, empty encoding */)computeBottomPlaneTranslationTarget;
- (void)setBottomPlaneTranslationTarget:(SEL)a0;

@end
