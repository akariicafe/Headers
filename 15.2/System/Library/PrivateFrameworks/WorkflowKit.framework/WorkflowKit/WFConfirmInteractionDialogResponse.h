@interface WFConfirmInteractionDialogResponse : WFDialogResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long interactionResponseCode;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)shouldDismissDialogInTransientMode;
- (id)initWithInteractionResponseCode:(unsigned long long)a0;

@end
