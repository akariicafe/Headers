@class NSString, MTRContentLauncherClusterStyleInformationStruct;

@interface MTRContentLauncherClusterBrandingInformationStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *providerName;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *background;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *logo;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *progressBar;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *splash;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *waterMark;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
