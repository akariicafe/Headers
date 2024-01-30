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

- (void)weeAppWithBundleID:(id)a0 setHiddenFromUser:(BOOL)a1;
- (void)weeAppWithBundleID:(id)a0 getHiddenFromUser:(id /* block */)a1;
- (void)dealloc;
- (void)sendMessageToDataProviderSectionID:(id)a0 name:(id)a1 userInfo:(id)a2;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
