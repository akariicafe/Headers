@class NSString, NSXPCConnection;

@interface BBServerConduit : NSObject <BBServerConduitClientInterface> {
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;
+ (id)sharedConduit;

- (void)weeAppWithBundleID:(id)a0 getHiddenFromUser:(id /* block */)a1;
- (void)sendMessageToDataProviderSectionID:(id)a0 name:(id)a1 userInfo:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)weeAppWithBundleID:(id)a0 setHiddenFromUser:(BOOL)a1;
- (void)dealloc;

@end
