@class NSString, NSXPCListenerEndpoint;

@interface WFShowActionInterfaceDialogResponse : WFDialogResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly, nonatomic, getter=isUnsupported) BOOL unsupported;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCancelled:(BOOL)a0;
- (BOOL)shouldDismissDialogInTransientMode;
- (id)initWithUnsupported:(BOOL)a0;
- (id)initWithListenerEndpoint:(id)a0 userInterfaceType:(id)a1;

@end
