@class NSObject, NSString, NSXPCConnection;
@protocol OS_os_log, ANAnnounceReachabilityDelegate;

@interface ANAnnounceReachability : NSObject <ANAnnounceReachabilityServiceInterfaceDelegate>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (weak, nonatomic) id<ANAnnounceReachabilityDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForAnnounceReachabilityLevel:(unsigned long long)a0;

- (void)_start;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (void)reachabilityLevel:(unsigned long long)a0 didChangeForHomeName:(id)a1;
- (void)reachabilityLevel:(unsigned long long)a0 didChangeForRoomName:(id)a1 inHomeName:(id)a2;
- (void)reachabilityLevel:(unsigned long long)a0 didChangeForHomeUUID:(id)a1;
- (void)reachabilityLevel:(unsigned long long)a0 didChangeForRoomUUID:(id)a1 inHomeUUID:(id)a2;
- (unsigned long long)announceReachabilityForHomeName:(id)a0;
- (unsigned long long)announceReachabilityForRoomName:(id)a0 inHomeName:(id)a1;
- (unsigned long long)announceReachabilityForHomeUUID:(id)a0;
- (unsigned long long)announceReachabilityForRoomUUID:(id)a0 inHomeUUID:(id)a1;

@end
