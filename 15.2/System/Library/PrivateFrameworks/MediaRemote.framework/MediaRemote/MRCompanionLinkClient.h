@class NSArray, NSMutableDictionary, NSMutableSet, RPCompanionLinkClient, NSMutableArray;

@interface MRCompanionLinkClient : NSObject {
    NSMutableSet *_pendingRegisteredEvents;
    NSMutableSet *_registeredEvents;
    NSMutableArray *_pendingEvents;
    NSMutableSet *_pendingRegisteredRequests;
    NSMutableSet *_registeredRequests;
    NSMutableArray *_pendingRequests;
}

@property (retain, nonatomic) RPCompanionLinkClient *connection;
@property (retain, nonatomic) NSMutableDictionary *eventCallbacks;
@property (retain, nonatomic) NSMutableDictionary *requestCallbacks;
@property (readonly, nonatomic) NSArray *companionLinkDevices;

+ (void)rapportCompanionLinkClient:(id /* block */)a0;
+ (id)sharedCompanionLinkClient;
+ (id)sharedIDSCompanionLinkClient;

- (void)_enqueueEvent:(id)a0 userInfo:(id)a1 destination:(id)a2 uid:(id)a3;
- (id)initWithOptions:(int)a0;
- (void)sendEventToCompanion:(id)a0 userInfo:(id)a1;
- (id)nameForUID:(id)a0;
- (void)sendEvent:(id)a0 toDevicesOfHomeUser:(id)a1 userInfo:(id)a2;
- (void)sendRequest:(id)a0 destination:(id)a1 userInfo:(id)a2 timeout:(double)a3 response:(id /* block */)a4;
- (void)_handleEventID:(id)a0 event:(id)a1 options:(id)a2;
- (id)rapportUIDForDeviceUID:(id)a0;
- (void)_sendEvent:(id)a0 userInfo:(id)a1 destination:(id)a2 uid:(id)a3;
- (void).cxx_destruct;
- (id)_resolveEventID:(id)a0;
- (id)registerEvent:(id)a0 callback:(id /* block */)a1;
- (void)_registerEvent:(id)a0;
- (void)_sendRequest:(id)a0 userInfo:(id)a1 destination:(id)a2 uid:(id)a3 date:(id)a4 response:(id /* block */)a5;
- (id)registerRequest:(id)a0 callback:(id /* block */)a1;
- (void)_registerRequest:(id)a0;
- (void)_handleRequestID:(id)a0 request:(id)a1 options:(id)a2 response:(id /* block */)a3;
- (void)_enqueueRequest:(id)a0 userInfo:(id)a1 destination:(id)a2 uid:(id)a3 date:(id)a4 response:(id /* block */)a5;
- (void)sendEvent:(id)a0 destination:(id)a1 userInfo:(id)a2;
- (void)sendEventToHome:(id)a0 userInfo:(id)a1;
- (void)removeCallback:(id)a0;
- (id)deviceUIDForRapportUID:(id)a0;

@end
