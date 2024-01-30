@class NSArray;

@interface SFResultsReceivedAfterTimeoutFeedback : SFFeedback <NSCopying>

@property (copy, nonatomic) NSArray *results;

+ (BOOL)supportsSecureCoding;

- (id)initWithResults:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
