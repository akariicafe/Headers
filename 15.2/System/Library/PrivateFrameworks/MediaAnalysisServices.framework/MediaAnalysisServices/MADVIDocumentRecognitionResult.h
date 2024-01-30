@class NSArray;

@interface MADVIDocumentRecognitionResult : MADResult

@property (readonly) unsigned long long executionNanoseconds;
@property (readonly) double executionTimeInterval;
@property (readonly, nonatomic) NSArray *observations;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithObservations:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
