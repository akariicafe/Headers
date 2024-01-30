@interface MTColor : NSObject {
    struct CGColor { } *_cachedColor;
}

+ (id)colorWithDescription:(id)a0;
+ (id)whiteColor;
+ (id)blackColor;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithWhite:(double)a0 alpha:(double)a1;
+ (id)pinkColor;

- (id)_initWithDescription:(id)a0;
- (struct CGColor { } *)CGColor;
- (id)colorWithAlphaComponent:(double)a0;
- (id)_rgbColor;
- (void)dealloc;
- (id)colorDescription;
- (id)_initWithCGColor:(struct CGColor { } *)a0;
- (struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; })sourceOverColorMatrix;
- (id)colorBlendedWithColor:(id)a0;
- (id)colorWithAdditionalAlphaComponent:(double)a0;

@end
