@class NSArray;

@interface MADVIRectangleDetectionResult : MADResult

@property (readonly, nonatomic) NSArray *observations;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithObservations:(id)a0;

@end
