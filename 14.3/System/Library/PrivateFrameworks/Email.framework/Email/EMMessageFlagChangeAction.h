@class ECMessageFlagChange;

@interface EMMessageFlagChangeAction : EMMessageChangeAction

@property (readonly, nonatomic) ECMessageFlagChange *flagChange;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithMessageListItems:(id)a0 flagChange:(id)a1;
- (long long)signpostType;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
