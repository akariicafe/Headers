@class NSDate;

@interface CXChannelTransmitStopAction : CXChannelAction

@property (retain, nonatomic) NSDate *stopDate;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)customDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)fulfill;
- (void)fulfillWithStopDate:(id)a0;
- (void)updateAsFulfilledWithStopDate:(id)a0;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
