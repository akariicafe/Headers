@class NSString, NSXPCConnection;
@protocol STDynamicActivityAttributionServerHandle;

@interface STDynamicActivityAttributionXPCClientHandle : NSObject <STDynamicAttributionXPCServerProtocol>

@property (readonly, weak, nonatomic) id<STDynamicActivityAttributionServerHandle> serverHandle;
@property (readonly, nonatomic) NSXPCConnection *clientXPCConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0 serverHandle:(id)a1;
- (void)setCurrentAttributionKey:(id)a0 application:(id)a1 reply:(id /* block */)a2;

@end
