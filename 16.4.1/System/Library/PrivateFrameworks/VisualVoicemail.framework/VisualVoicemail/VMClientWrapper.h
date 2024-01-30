@class NSXPCConnection;
@protocol VMClientXPCProtocol;

@interface VMClientWrapper : NSObject

@property (class, readonly, nonatomic, getter=isVMXPCAvailable) BOOL vmXPCAvailable;

@property (retain, nonatomic) NSXPCConnection *clientConnection;
@property (weak, nonatomic) id<VMClientXPCProtocol> manager;

+ (id)voicemailClientXPCInterface;
+ (id)voicemailServerXPCInterface;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
