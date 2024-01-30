@class NSArray;

@interface SFResultsReceivedAfterTimeoutFeedback : SFFeedback <NSCopying>

@property (copy, nonatomic) NSArray *results;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResults:(id)a0;

@end
