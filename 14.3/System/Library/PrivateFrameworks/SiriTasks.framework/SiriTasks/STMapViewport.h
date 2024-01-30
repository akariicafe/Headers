@class NSArray;

@interface STMapViewport : STSiriModelObject

@property (nonatomic) double northLatitude;
@property (nonatomic) double southLatitude;
@property (nonatomic) double eastLongitude;
@property (nonatomic) double westLongitude;
@property (nonatomic) double timeSinceViewportChanged;
@property (nonatomic) double timeSinceViewportEnteredForeground;
@property (copy, nonatomic) NSArray *viewportVertices;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_aceContextObjectValue;
- (void)encodeWithCoder:(id)a0;

@end
