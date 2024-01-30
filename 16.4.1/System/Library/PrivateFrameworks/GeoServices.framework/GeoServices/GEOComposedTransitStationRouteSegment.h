@interface GEOComposedTransitStationRouteSegment : GEOComposedTransitBaseRouteSegment

- (BOOL)hasEnterStationManeuver;
- (BOOL)hasExitStationManeuver;
- (id)initWithComposedRoute:(id)a0 decoderData:(id)a1 stepRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 transitStepRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (BOOL)isTransfer;

@end
