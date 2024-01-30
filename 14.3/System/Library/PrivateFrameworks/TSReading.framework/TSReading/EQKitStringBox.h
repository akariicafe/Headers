@class NSAttributedString;

@interface EQKitStringBox : EQKitBox {
    struct __CTLine { } *mLine;
    double mHeight;
    double mDepth;
    double mWidth;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mErasableBounds;
    BOOL mDimensionsValid;
}

@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double depth;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) struct __CTLine { } *line;
@property (readonly, nonatomic) struct CGColor { } *color;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })erasableBounds;
- (void)renderIntoContext:(struct CGContext { } *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)appendOpticalAlignToSpec:(struct Spec { struct vector<EQKit::OpticalKern::Spec::Entry, std::__1::allocator<EQKit::OpticalKern::Spec::Entry> > { struct Entry *x0; struct Entry *x1; struct __compressed_pair<EQKit::OpticalKern::Spec::Entry *, std::__1::allocator<EQKit::OpticalKern::Spec::Entry> > { struct Entry *x0; } x2; } x0; unsigned int x1; } *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithAttributedString:(id)a0 cgColor:(struct CGColor { } *)a1;
- (void)p_cacheDimensions;
- (double)positionOfCharacterAtIndex:(unsigned long long)a0;

@end
