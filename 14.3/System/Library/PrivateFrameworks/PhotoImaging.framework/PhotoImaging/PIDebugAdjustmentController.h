@class NSString;

@interface PIDebugAdjustmentController : PIAdjustmentController

@property (class, readonly, nonatomic) NSString *inputExposureKey;
@property (class, readonly, nonatomic) NSString *outputExposureKey;
@property (class, readonly, nonatomic) NSString *falseColorHDRKey;
@property (class, readonly, nonatomic) NSString *inputRAWGamutMapMaxKey;

@end
