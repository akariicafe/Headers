@interface IPAShortestEdgeImageSizePolicy : IPAImageSizePolicy {
    double _shortestEdge;
}

- (void)encodeWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isBestFitPolicy;
- (id)initWithShortestEdge:(double)a0;

@end
