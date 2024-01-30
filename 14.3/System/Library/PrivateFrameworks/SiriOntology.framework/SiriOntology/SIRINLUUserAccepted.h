@interface SIRINLUUserAccepted : NSObject <SIRINLUUserDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
