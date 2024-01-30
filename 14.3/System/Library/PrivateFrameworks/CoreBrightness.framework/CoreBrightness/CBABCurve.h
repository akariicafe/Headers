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

- (id)init;
- (id)initWithUUID:(id)a0;
- (id)description;
- (void)resetToDefaultState;
- (BOOL)setLux:(float)a0;
- (unsigned long long)getVersion;
- (float)getScaledBL2;
- (float)getScaledBL1;
- (void)setScaledBL2:(float)a0;
- (void)setScaledBL1:(float)a0;
- (void)setLinearBrightnessMin:(float)a0 andMax:(float)a1;
- (float)getLinearBrightness;
- (void)updateALSParametersForDisplayBrightness:(float)a0;
- (id)copyUserPrefState;
- (void)setSavedPrefences:(id)a0;

@end
