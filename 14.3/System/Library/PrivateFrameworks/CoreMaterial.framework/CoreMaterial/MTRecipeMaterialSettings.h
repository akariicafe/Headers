@class NSDictionary, NSString;
@protocol MTTinting, MTMaterialFiltering;

@interface MTRecipeMaterialSettings : NSObject <MTRecipeMaterialSettingsProviding>

@property (retain, nonatomic) NSDictionary *styles;
@property (readonly, nonatomic) id<MTTinting, MTMaterialFiltering> baseMaterialSettings;
@property (readonly, nonatomic) id<MTTinting, MTMaterialFiltering> baseOverlaySettings;
@property (readonly, nonatomic) id<MTTinting, MTMaterialFiltering> primaryOverlaySettings;
@property (readonly, nonatomic) id<MTTinting, MTMaterialFiltering> secondaryOverlaySettings;
@property (readonly, nonatomic) id<MTTinting, MTMaterialFiltering> auxiliaryOverlaySettings;
@property (readonly, nonatomic) long long materialSettingsVersion;
@property (readonly, copy, nonatomic) NSString *recipeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styleSetNameForStyleSetFromRecipeWithName:(id)a0;

- (id)settingsForConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)_newVisualStyleSet;
- (id)styleNameForCategory:(id)a0;
- (id)_visualStyleSetDescription;
- (id)_platformColorsStyleSetName;
- (id)initWithRecipeName:(id)a0 andDescription:(id)a1 descendantDescriptions:(id)a2 bundle:(id)a3;

@end
