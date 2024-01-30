@interface NIPlatformInfo : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)supportsSyntheticAperture;
+ (BOOL)supportsUWB;
+ (BOOL)supportsAoA;

@end
