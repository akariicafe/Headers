@class NSString;

@interface AVClusterComponentOutputDeviceDescription : NSObject <AVOutputDeviceDescription>

@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) long long deviceSubType;
@property (readonly, nonatomic) BOOL isClusterLeader;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDeviceID:(id)a0 deviceName:(id)a1 deviceSubType:(long long)a2 isClusterLeader:(BOOL)a3 modelID:(id)a4;

@end
