@class NSString, NSXPCConnection;

@interface BBServerConduit : NSObject <BBServerConduitClientInterface> {
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;
+ (id)sharedConduit;

- (id)init;
- (void).cxx_destruct;
- (void)weeAppWithBundleID:(id)a0 getHiddenFromUser:(id /* block */)a1;
- (void)dealloc;
- (void)weeAppWithBundleID:(id)a0 setHiddenFromUser:(BOOL)a1;
- (void)sendMessageToDataProviderSectionID:(id)a0 name:(id)a1 userInfo:(id)a2;
- (void)invalidate;

@end
