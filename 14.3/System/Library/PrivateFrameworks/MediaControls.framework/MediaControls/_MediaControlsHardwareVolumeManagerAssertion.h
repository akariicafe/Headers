@class NSString, MediaControlsHardwareVolumeManager;

@interface _MediaControlsHardwareVolumeManagerAssertion : NSObject <MediaControlsInvalidatable>

@property (weak, nonatomic) MediaControlsHardwareVolumeManager *volumeManager;
@property (copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;

@end
