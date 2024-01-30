@class NSData;

@interface CTSubscriberAlgorithmEAPSIM : CTSubscriberAlgorithm

@property (retain, nonatomic) NSData *rand;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
