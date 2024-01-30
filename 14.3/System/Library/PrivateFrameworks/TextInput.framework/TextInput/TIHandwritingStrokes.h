@interface TIHandwritingStrokes : NSObject <NSCopying, NSSecureCoding> {
    struct vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > > { struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > *__begin_; struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > *__end_; struct __compressed_pair<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > *, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > > { struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > *__value_; } __end_cap_; } _strokes;
    BOOL _continuePreviousStroke;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPoint:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)totalNumberOfPoints;
- (void)endStroke;
- (void)removeAllStrokes;
- (unsigned long long)numberOfStrokes;
- (void)removeStrokeAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfPointsInStrokeAtIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })pointAtIndex:(unsigned long long)a0 inStrokeAtIndex:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id).cxx_construct;
- (void)encodeWithCoder:(id)a0;

@end
