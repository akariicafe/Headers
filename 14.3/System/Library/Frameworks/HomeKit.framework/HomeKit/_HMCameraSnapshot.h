@class NSDate;

@interface _HMCameraSnapshot : _HMCameraSource

@property (readonly, copy, nonatomic) NSDate *captureDate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSessionID:(id)a0 slotIdentifier:(id)a1 context:(id)a2 profileUniqueIdentifier:(id)a3 aspectRatio:(id)a4 captureDate:(id)a5;
- (void)_releaseSlotIdentifier;

@end
