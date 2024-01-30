@class NSDate;

@interface CXEndCallAction : CXCallAction

@property (copy, nonatomic) NSDate *dateEnded;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)fulfill;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)fulfillWithDateEnded:(id)a0;
- (void)updateAsFulfilledWithDateEnded:(id)a0;

@end
