@protocol MKAnnotation;

@interface FMAccuracyOverlay : MKCircle

@property (weak, nonatomic) id<MKAnnotation> parentAnnotation;
@property (nonatomic) double horizontalAccuracy;

- (id)description;
- (void).cxx_destruct;

@end
