@class CXHandoffContext, NSDate;

@interface CXPullCallAction : CXCallAction

@property (copy, nonatomic) NSDate *dateConnected;
@property (retain, nonatomic) CXHandoffContext *handoffContext;

+ (double)timeout;
+ (BOOL)supportsSecureCoding;

- (id)customDescription;
- (void).cxx_destruct;
- (void)fulfill;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)fulfillWithDateConnected:(id)a0;
- (void)updateAsFulfilledWithDateConnected:(id)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;

@end
