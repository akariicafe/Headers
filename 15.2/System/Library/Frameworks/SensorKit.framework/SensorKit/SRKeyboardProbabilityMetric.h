@class NSArray, NSUnit, NSMutableArray;

@interface SRKeyboardProbabilityMetric : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSUnit *unitType;
@property (nonatomic) long long totalDataSamples;
@property (retain) NSMutableArray *mutableSampleValues;
@property (readonly, copy) NSArray *distributionSampleValues;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
