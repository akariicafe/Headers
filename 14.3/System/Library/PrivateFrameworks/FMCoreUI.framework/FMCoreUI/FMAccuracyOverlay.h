@protocol MKAnnotation;

@interface FMAccuracyOverlay : MKCircle

@property (weak, nonatomic) id<MKAnnotation> parentAnnotation;
@property (nonatomic) double horizontalAccuracy;

- (void).cxx_destruct;
- (id)description;

@end
