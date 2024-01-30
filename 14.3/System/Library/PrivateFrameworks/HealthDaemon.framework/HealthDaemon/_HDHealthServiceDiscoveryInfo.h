@class CBUUID, NSMutableSet, NSObject;
@protocol OS_dispatch_source;

@interface _HDHealthServiceDiscoveryInfo : NSObject {
    NSMutableSet *_peripheralsUUIDs;
}

@property (nonatomic) unsigned long long discoveryIdentifier;
@property (readonly, nonatomic) id /* block */ discoveryHandler;
@property (readonly, nonatomic) CBUUID *serviceUUID;
@property (readonly, nonatomic) BOOL alwaysNotify;
@property (readonly, nonatomic) BOOL requiresActiveScan;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;

- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0 serviceUUID:(id)a1 alwaysNotify:(BOOL)a2 requiresActiveScan:(BOOL)a3;
- (BOOL)_addPeripheralUUID:(id)a0;

@end
