@interface WFConfirmInteractionDialogResponse : WFDialogResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long interactionResponseCode;

- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (BOOL)shouldDismissDialogInTransientMode;
- (id)initWithInteractionResponseCode:(unsigned long long)a0;

@end
