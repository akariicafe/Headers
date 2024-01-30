@interface MFPRedEyeCorrectionEffect : MFPEffect {
    struct vector<CGRect, std::__1::allocator<CGRect> > { struct CGRect *x0; struct CGRect *x1; struct __compressed_pair<CGRect *, std::__1::allocator<CGRect> > { struct CGRect *x0; } x2; } *mAreas;
}

+ (id)GUID;

- (void)dealloc;
- (id)initWithAreas:(const struct vector<CGRect, std::__1::allocator<CGRect> > { struct CGRect *x0; struct CGRect *x1; struct __compressed_pair<CGRect *, std::__1::allocator<CGRect> > { struct CGRect *x0; } x2; } *)a0;

@end
