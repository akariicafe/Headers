@class NSArray, NSString;
@protocol TPSCloudCallingDeviceControllerDelegate;

@interface TPSCloudCallingDeviceController : NSObject <TUCallCapabilitiesDelegatePrivate>

@property (copy, nonatomic) NSArray *devices;
@property (weak, nonatomic) id<TPSCloudCallingDeviceControllerDelegate> delegate;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)didChangeCloudCallingDevices;

@end
