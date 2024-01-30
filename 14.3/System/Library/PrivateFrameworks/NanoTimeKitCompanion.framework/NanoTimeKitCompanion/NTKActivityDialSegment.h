@class CALayer, NTKFaceColorScheme;

@interface NTKActivityDialSegment : NSObject

@property (nonatomic) double alpha;
@property (retain, nonatomic) NTKFaceColorScheme *colorScheme;
@property (retain, nonatomic) CALayer *arcLayer;
@property (retain, nonatomic) CALayer *tickLayer;
@property (nonatomic) double tickRotation;
@property (nonatomic) double tickScale;

- (void).cxx_destruct;
- (void)_updateTransform;
- (id)initWithHourIndex:(long long)a0;

@end
