@class HMDXPCClientConnection;

@interface HMDXPCMessageFilter : HMFMessageFilter

@property (readonly) HMDXPCClientConnection *connection;

+ (id)policyClasses;
+ (BOOL)canInitWithMessage:(id)a0;

- (id)initWithMessage:(id)a0;
- (void).cxx_destruct;

@end
