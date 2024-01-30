@class NSMutableDictionary, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HUDeviceController : NSObject <AXHARemoteUpdateProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *deviceUpdatesQueue;
@property (retain, nonatomic) NSMutableDictionary *deviceUpdatesDescription;
@property (retain, nonatomic) NSMutableArray *updateDeviceBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 andDeviceID:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (BOOL)representsLocalDevices;
- (id)hearingAidForDeviceID:(id)a0;
- (void)updateProperty:(unsigned long long)a0 forDeviceID:(id)a1;
- (void)device:(id)a0 didUpdateProperty:(unsigned long long)a1;
- (void)registerForPropertyUpdates:(id /* block */)a0;
- (void)stopPropertyUpdates;

@end
