@class NSString, CCUICAPackageDescription, UIImage;

@interface MRUOutputDeviceAsset : NSObject

@property (nonatomic) unsigned long long deviceCount;
@property (readonly, nonatomic) NSString *localizedDisplayTitle;
@property (readonly, nonatomic) CCUICAPackageDescription *packageDescription;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long kind;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 deviceCount:(unsigned long long)a1;
- (id)initWithIcon:(id)a0 type:(long long)a1 deviceCount:(unsigned long long)a2;
- (id)initWithPackageName:(id)a0 type:(long long)a1 deviceCount:(unsigned long long)a2;
- (id)initWithOutputDeviceRoute:(id)a0;
- (long long)outputDeviceAssetTypeForOutputDeviceRoute:(id)a0;
- (id)localizedDisplayTitleForAssetType:(long long)a0 deviceCount:(unsigned long long)a1;
- (id)packageNameForAssetType:(long long)a0;
- (id)iconForAssetType:(long long)a0;

@end
