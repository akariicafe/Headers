@interface CAMConflictingControlConfiguration : NSObject

@property (readonly, nonatomic) long long desiredFlashMode;
@property (readonly, nonatomic) long long desiredHDRMode;
@property (readonly, nonatomic) long long flashAndHDRConflictingControl;
@property (readonly, nonatomic) long long desiredLivePhotoMode;
@property (readonly, nonatomic) long long desiredRAWMode;
@property (readonly, nonatomic) unsigned long long rawConflicts;
@property (readonly, nonatomic) unsigned long long desiredLowLightControlMode;
@property (readonly, nonatomic) unsigned long long lowLightConflicts;

+ (void)resolveDesiredFlashMode:(long long)a0 desiredHDRMode:(long long)a1 primaryConflictingControl:(long long)a2 device:(long long)a3 toFlashMode:(long long *)a4 HDRMode:(long long *)a5;
+ (void)resolveDesiredRAWMode:(long long)a0 rawConflicts:(unsigned long long)a1 desiredLivePhotoMode:(long long)a2 desiredFlashMode:(long long)a3 toRAWMode:(long long *)a4 toLivePhotoMode:(long long *)a5 toFlashMode:(long long *)a6;
+ (unsigned long long)resolveDesiredLowLightControlMode:(unsigned long long)a0 lowLightConflicts:(unsigned long long)a1 resolvedFlashMode:(long long)a2;

- (id)initWithDesiredFlashMode:(long long)a0 desiredHDRMode:(long long)a1 flashAndHDRConflictingControl:(long long)a2 desiredLivePhotoMode:(long long)a3 desiredRAWMode:(long long)a4 rawConflicts:(unsigned long long)a5 desiredLowLightControlMode:(unsigned long long)a6 lowLightConflicts:(unsigned long long)a7;

@end
