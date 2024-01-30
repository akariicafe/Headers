@class NSString, AccessoryHIDClient, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ACCFeaturePluginHIDProvider : NSObject <AccessoryHIDClientProtocol>

@property (retain, nonatomic) NSMutableArray *descriptorUUIDs;
@property (retain) AccessoryHIDClient *hidClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *hidProviderLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHIDProvider;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)getDescriptor:(id)a0;
- (id)createHIDDescriptor:(id)a0;
- (BOOL)deleteHIDDescriptor:(id)a0;
- (BOOL)processGetReportResponse:(id)a0 reportType:(unsigned char)a1 reportID:(unsigned char)a2 forUUID:(id)a3;
- (BOOL)processInReport:(id)a0 forUUID:(id)a1;
- (void)stopHIDProvider;
- (void)startHIDProvider;

@end
