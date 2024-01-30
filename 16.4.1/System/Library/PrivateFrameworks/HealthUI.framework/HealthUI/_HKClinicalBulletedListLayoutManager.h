@class NSAttributedString;

@interface _HKClinicalBulletedListLayoutManager : NSLayoutManager {
    struct CGSize { double width; double height; } _bulletSize;
}

@property (copy, nonatomic) NSAttributedString *bullet;

- (void).cxx_destruct;
- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;

@end
