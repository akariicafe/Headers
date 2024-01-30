@class NSString;

@interface SBApplicationLaunchImageParameters : NSObject

@property (readonly, copy, nonatomic) NSString *defaultPNGName;
@property (readonly, copy, nonatomic) NSString *extension;
@property (readonly, copy, nonatomic) NSString *minOSVersionString;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) long long interfaceOrientation;

+ (id)launchImageParametersFromLaunchImagesInfo:(id)a0 withBundleIdentifier:(id)a1 isMonarchLinked:(BOOL)a2;
+ (id)validInfoPlistOrientationKeys;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
