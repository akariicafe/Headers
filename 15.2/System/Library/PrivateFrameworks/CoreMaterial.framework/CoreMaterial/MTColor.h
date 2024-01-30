@interface MTColor : NSObject {
    struct CGColor { } *_cachedColor;
}

+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithWhite:(double)a0 alpha:(double)a1;
+ (id)colorWithDescription:(id)a0;
+ (id)pinkColor;
+ (id)whiteColor;
+ (id)blackColor;

- (id)colorWithAlphaComponent:(double)a0;
- (id)colorBlendedWithColor:(id)a0;
- (id)_rgbColor;
- (struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; })sourceOverColorMatrix;
- (id)colorWithAdditionalAlphaComponent:(double)a0;
- (struct CGColor { } *)CGColor;
- (id)_initWithCGColor:(struct CGColor { } *)a0;
- (id)_initWithDescription:(id)a0;
- (id)colorDescription;
- (void)dealloc;

@end
