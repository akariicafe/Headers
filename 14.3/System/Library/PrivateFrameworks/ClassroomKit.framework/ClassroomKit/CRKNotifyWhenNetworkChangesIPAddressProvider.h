@class NSString, NSObject;
@protocol OS_dispatch_queue, CRKIPAddressProviding;

@interface CRKNotifyWhenNetworkChangesIPAddressProvider : NSObject <CRKIPAddressProviding> {
    id<CRKIPAddressProviding> mBaseProvider;
    NSObject<OS_dispatch_queue> *mQueue;
    int mNetworkChangeNotificationToken;
}

@property (copy, nonatomic) NSString *IPAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)subscribeToNetworkChangeNotifications;
- (id)initWithIPAddressProvider:(id)a0;
- (void)unsubscribeFromNetworkChangeNotifications;
- (void)networkDidChange;
- (void)networkDidChangeDebounced;

@end
