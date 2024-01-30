@class NSData;

@interface CTSubscriberAlgorithmEAPAKA : CTSubscriberAlgorithm

@property (retain, nonatomic) NSData *rand;
@property (retain, nonatomic) NSData *autn;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
