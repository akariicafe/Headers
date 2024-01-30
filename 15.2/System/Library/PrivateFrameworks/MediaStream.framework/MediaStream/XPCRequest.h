@class NSObject;
@protocol OS_xpc_object;

@interface XPCRequest : NSObject {
    id /* block */ _handler;
}

@property (readonly, nonatomic) unsigned long long sequence;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *message;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *reply;

- (id)initWithMessage:(id)a0 sequence:(unsigned long long)a1 connection:(id)a2;
- (void).cxx_destruct;
- (void)sendReply;

@end
