@interface NIDeviceCapabilities : NSObject

@property (readonly) BOOL supportsFineRanging;
@property (readonly) BOOL supportsCoarseRanging;

- (id)initWithFineRangingSupport:(BOOL)a0 coarseRangingSupport:(BOOL)a1;

@end
