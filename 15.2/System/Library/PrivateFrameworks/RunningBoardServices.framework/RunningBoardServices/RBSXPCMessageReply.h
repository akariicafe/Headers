@class RBSXPCMessageContext, RBSXPCCoder;

@interface RBSXPCMessageReply : NSObject {
    RBSXPCMessageContext *_context;
    BOOL _sent;
}

@property (readonly, nonatomic) RBSXPCCoder *payload;

- (void)send;
- (void)prepareForHandoff;
- (void).cxx_destruct;

@end
