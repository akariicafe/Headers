@protocol TKSmartCardUserInteractionDelegate;

@interface TKSmartCardUserInteraction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) id<TKSmartCardUserInteractionDelegate> delegate;
@property double initialTimeout;
@property double interactionTimeout;

- (BOOL)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)runWithReply:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
