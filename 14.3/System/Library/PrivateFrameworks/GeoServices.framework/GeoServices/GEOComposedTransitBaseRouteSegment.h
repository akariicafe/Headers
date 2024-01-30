@interface GEOComposedTransitBaseRouteSegment : GEOComposedRouteSegment {
    struct _NSRange { unsigned long long location; unsigned long long length; } _transitStepRange;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)startingTransitStop;
- (id)endingTransitStop;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })transitStepRange;
- (id)initWithComposedRoute:(id)a0 routeSegmentType:(long long)a1 stepRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 transitStepRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (void)encodeWithCoder:(id)a0;

@end
