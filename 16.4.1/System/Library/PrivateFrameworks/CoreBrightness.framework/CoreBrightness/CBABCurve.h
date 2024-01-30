@class NSObject;
@protocol OS_os_log;

@interface CBABCurve : NSObject {
    struct { float minimumBrightness; float maximumBrightness; float bl1; float bl2; float e1; float e2; float eThresh; } pref;
    float currentLux;
    float mappedBrightness;
    NSObject<OS_os_log> *_logHandle;
}

@property (readonly) unsigned long long version;
@property float scaleFactor;

- (id)initWithUUID:(id)a0;
- (id)init;
- (id)description;
- (id)initWithConfiguration:(id)a0;
- (BOOL)setLux:(float)a0;
- (id)copyUserPrefState;
- (float)getLinearBrightness;
- (float)getLux;
- (float)getScaledBL1;
- (float)getScaledBL2;
- (id)initWithUUID:(id)a0 vendorID:(id)a1 andProductID:(id)a2;
- (void)resetToDefaultState;
- (void)setLinearBrightnessMin:(float)a0 andMax:(float)a1;
- (void)setSavedPrefences:(id)a0;
- (void)setScaledBL1:(float)a0;
- (void)setScaledBL2:(float)a0;
- (void)updateALSParametersForDisplayBrightness:(float)a0;

@end
