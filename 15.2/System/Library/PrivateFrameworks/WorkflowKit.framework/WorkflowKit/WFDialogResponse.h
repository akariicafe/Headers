@interface WFDialogResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) long long responseCode;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithResponseCode:(long long)a0;
- (id)initWithCancelled:(BOOL)a0;
- (BOOL)shouldDismissDialogInTransientMode;

@end
