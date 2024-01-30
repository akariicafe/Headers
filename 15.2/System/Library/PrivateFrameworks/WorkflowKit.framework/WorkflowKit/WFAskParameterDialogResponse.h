@protocol WFPropertyListObject;

@interface WFAskParameterDialogResponse : WFDialogResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<WFPropertyListObject> serializedParameterState;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSerializedParameterState:(id)a0 cancelled:(BOOL)a1;

@end
