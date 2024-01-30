@interface SCRCGestureStylus : SCRCGestureFinger {
    double _altitude;
    double _azimuth;
}

- (double)altitude;
- (long long)type;
- (double)azimuth;
- (id)initWithIdentifier:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 pressure:(double)a2 altitude:(double)a3 azimuth:(double)a4;

@end
