@class NSString;

@interface _BlastDoorLPAppleNewsMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *title;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
