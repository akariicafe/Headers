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

- (id)init;
- (void).cxx_destruct;
- (void)device:(id)a0 didUpdateProperty:(unsigned long long)a1;
- (id)hearingAidForDeviceID:(id)a0;
- (void)registerForPropertyUpdates:(id /* block */)a0;
- (BOOL)representsLocalDevices;
- (void)stopPropertyUpdates;
- (void)updateProperty:(unsigned long long)a0 forDeviceID:(id)a1;
- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 andDeviceID:(id)a2;

@end
