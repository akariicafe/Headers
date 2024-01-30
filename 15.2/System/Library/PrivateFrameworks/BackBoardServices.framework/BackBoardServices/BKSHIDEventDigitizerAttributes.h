@class NSArray;

@interface BKSHIDEventDigitizerAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) float maximumForce;
@property (nonatomic) struct CGSize { double width; double height; } digitizerSurfaceSize;
@property (nonatomic) double digitizerSurfaceWidth;
@property (nonatomic) double digitizerSurfaceHeight;
@property (retain, nonatomic) NSArray *pathAttributes;
@property (nonatomic) double initialTouchTimestamp;
@property (nonatomic) unsigned char touchStreamIdentifier;
@property (nonatomic) BOOL systemGesturesPossible;
@property (nonatomic) BOOL systemGestureStateChange;

+ (id)protobufSchema;

- (void)setDigitizerSurfaceWidth:(double)a0;
- (void)setDigitizerSurfaceHeight:(double)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (double)digitizerSurfaceHeight;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)digitizerSurfaceWidth;
- (void)appendDescriptionToFormatter:(id)a0;

@end
