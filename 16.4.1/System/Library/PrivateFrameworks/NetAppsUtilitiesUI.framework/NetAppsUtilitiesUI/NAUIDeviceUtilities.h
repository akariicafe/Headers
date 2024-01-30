@class NSString;

@interface NAUIDeviceUtilities : NSObject

@property (class, readonly, copy, nonatomic) NSString *productType;
@property (class, readonly, copy, nonatomic) NSString *productHardwareModel;
@property (class, readonly, copy, nonatomic) NSString *productHardwareModelName;
@property (class, readonly, copy, nonatomic) NSString *productClass;
@property (class, readonly, copy, nonatomic) NSString *localizedProductName;
@property (class, readonly, copy, nonatomic) NSString *operatingSystemName;
@property (class, readonly, copy, nonatomic) NSString *uniqueDeviceIdentifier;
@property (class, readonly, nonatomic) int deviceClass;
@property (class, readonly, nonatomic) BOOL hasOrbCapability;
@property (class, readonly, nonatomic) double mainScreenScale;

+ (id)productVersion;
+ (id)productBuildVersion;
+ (BOOL)naui_isPad;
+ (BOOL)naui_isUsingLandscapeOrientation;
+ (BOOL)naui_shouldUseLargeiPadLayout;
+ (BOOL)naui_shouldUseLargeiPadLayoutForSize:(struct CGSize { double x0; double x1; })a0;

- (id)init;

@end
