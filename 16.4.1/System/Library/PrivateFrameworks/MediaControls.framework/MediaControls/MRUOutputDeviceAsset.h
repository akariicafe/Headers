@class NSString, UIImage, CCUICAPackageDescription;

@interface MRUOutputDeviceAsset : MRUAsset

@property (class, readonly, nonatomic) MRUOutputDeviceAsset *speakerAsset;
@property (class, readonly, nonatomic) MRUOutputDeviceAsset *inCallAsset;
@property (class, readonly, nonatomic) MRUOutputDeviceAsset *sharingAsset;

@property (readonly, nonatomic) NSString *localizedDisplayTitle;
@property (readonly, nonatomic) CCUICAPackageDescription *packageDescription;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long kind;

- (long long)outputDeviceAssetTypeForOutputDeviceRoute:(id)a0;
- (id)initWithPackageAsset:(id)a0 symbolName:(id)a1 image:(id)a2 type:(long long)a3 deviceCount:(unsigned long long)a4;
- (BOOL)isEqual:(id)a0;
- (id)localizedDisplayTitleForAssetType:(long long)a0 deviceCount:(unsigned long long)a1;
- (id)initWithOutputDeviceRoute:(id)a0;
- (void).cxx_destruct;

@end
