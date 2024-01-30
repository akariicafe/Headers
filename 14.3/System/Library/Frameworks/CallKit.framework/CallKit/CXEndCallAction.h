@class NSDate;

@interface CXEndCallAction : CXCallAction

@property (copy, nonatomic) NSDate *dateEnded;

+ (BOOL)supportsSecureCoding;

- (id)customDescription;
- (void).cxx_destruct;
- (void)fulfill;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)fulfillWithDateEnded:(id)a0;
- (void)updateAsFulfilledWithDateEnded:(id)a0;

@end
