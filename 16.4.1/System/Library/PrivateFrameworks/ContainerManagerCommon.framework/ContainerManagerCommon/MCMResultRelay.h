@class NSObject;
@protocol OS_xpc_object;

@interface MCMResultRelay : MCMResultBase

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcReplyFromRelay;

- (BOOL)encodeResultOntoReply:(id)a0;
- (void).cxx_destruct;
- (id)initWithXPCReplyFromRelay:(id)a0;

@end
