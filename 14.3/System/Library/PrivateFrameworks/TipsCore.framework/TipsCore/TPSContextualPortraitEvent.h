@class NSString;

@interface TPSContextualPortraitEvent : TPSContextualEvent

@property (nonatomic) double confidenceThreshold;
@property (copy, nonatomic) NSString *topicID;

+ (BOOL)supportsSecureCoding;
+ (id)classSet;

- (unsigned int)minObservationCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
