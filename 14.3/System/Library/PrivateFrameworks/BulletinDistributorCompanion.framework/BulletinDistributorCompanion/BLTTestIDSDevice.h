@class NSString;

@interface BLTTestIDSDevice : NSObject <BLTAbstractIDSDevice>

@property (nonatomic) BOOL isDefaultPairedDevice;
@property (nonatomic) BOOL isNearby;
@property (nonatomic) BOOL isConnected;
@property (nonatomic) BOOL isCloudReachable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
