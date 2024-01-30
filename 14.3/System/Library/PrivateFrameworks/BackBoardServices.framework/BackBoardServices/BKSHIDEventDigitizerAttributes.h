@class NSArray;

@interface BKSHIDEventDigitizerAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) float maximumForce;
@property (nonatomic) double digitizerSurfaceWidth;
@property (nonatomic) double digitizerSurfaceHeight;
@property (retain, nonatomic) NSArray *pathAttributes;
@property (nonatomic) double initialTouchTimestamp;
@property (nonatomic) unsigned char touchStreamIdentifier;
@property (nonatomic) BOOL systemGesturesPossible;
@property (nonatomic) BOOL systemGestureStateChange;

+ (id)protobufSchema;

- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
