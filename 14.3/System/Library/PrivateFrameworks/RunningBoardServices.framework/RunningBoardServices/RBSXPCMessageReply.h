@class RBSXPCMessageContext, RBSXPCCoder;

@interface RBSXPCMessageReply : NSObject {
    BOOL _sent;
}

@property (readonly, nonatomic) RBSXPCCoder *payload;
@property (readonly, nonatomic) RBSXPCMessageContext *context;

- (void).cxx_destruct;
- (void)prepareForHandoff;
- (void)send;
- (void)encode:(id /* block */)a0;

@end
