@interface PAEKeyerHistogram : NSObject <NSCoding> {
    struct ColorHisto { struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } x0; int x1; int x2; int x3; } *_histogram;
}

- (id)init;
- (void)setHistogram:(struct ColorHisto { struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } x0; int x1; int x2; int x3; } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (struct ColorHisto { struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } x0; int x1; int x2; int x3; } *)getHistogram;
- (void)setHistogramArray:(id)a0;

@end
