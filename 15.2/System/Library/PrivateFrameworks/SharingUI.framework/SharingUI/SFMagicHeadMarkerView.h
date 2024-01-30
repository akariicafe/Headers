@interface SFMagicHeadMarkerView : UIView {
    double _positionDegree;
    double _containerRadius;
}

@property (readonly) double currentOffset;

- (void)updateMarkerWithDegreeOffset:(double)a0;
- (id)initWithPositionDegree:(double)a0 containerRadius:(double)a1;

@end
