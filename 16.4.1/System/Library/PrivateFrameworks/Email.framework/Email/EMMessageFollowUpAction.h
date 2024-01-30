@class EMFollowUp;

@interface EMMessageFollowUpAction : EMMessageChangeAction

@property (readonly, nonatomic) EMFollowUp *followUp;

+ (BOOL)supportsSecureCoding;

- (long long)signpostType;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessageListItems:(id)a0 followUp:(id)a1;

@end
