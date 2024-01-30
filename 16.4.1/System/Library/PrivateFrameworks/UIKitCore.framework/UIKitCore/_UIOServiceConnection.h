@class UIOServer, NSString, NSHashTable, BSServiceConnection;
@protocol BSServiceConnectionHost;

@interface _UIOServiceConnection : NSObject <_UIOverlayServiceClientToServerInterface> {
    NSHashTable *_observers;
}

@property (readonly, weak, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection;
@property (readonly, weak, nonatomic) UIOServer *server;
@property (readonly, nonatomic) long long pid;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectionWithBSServiceConnection:(id)a0 toServer:(id)a1;

- (void)sendResponse:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)removeObserver:(id)a0;
- (void)removeAllObservers;
- (void).cxx_destruct;
- (oneway void)performOverlayAction:(id)a0;
- (void)serviceConnectionDidInvalidate;

@end
