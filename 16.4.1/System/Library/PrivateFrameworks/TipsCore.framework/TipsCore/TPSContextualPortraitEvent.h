@class NSString;

@interface TPSContextualPortraitEvent : TPSContextualEvent

@property (nonatomic) double confidenceThreshold;
@property (copy, nonatomic) NSString *topicID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (unsigned int)minObservationCount;

@end
