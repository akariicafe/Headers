@class AVTColorPreset, NSString, AVTCoreModelColor;

@interface AVTAvatarAttributeEditorSectionColorItem : NSObject <AVTAvatarAttributeEditorSectionItemInternal, AVTAvatarAttributeEditorSectionItem>

@property (readonly, copy, nonatomic) id /* block */ layerContentProvider;
@property (readonly, copy, nonatomic) id /* block */ gradientProvider;
@property (readonly, nonatomic) AVTCoreModelColor *color;
@property (readonly, nonatomic) AVTColorPreset *skinColor;
@property (nonatomic) BOOL hasDerivedColorDependency;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) id /* block */ avatarUpdater;

- (void).cxx_destruct;
- (id)colorPreset;
- (id)initWithColor:(id)a0 imageProvider:(id)a1 colorLayerProvider:(id)a2 avatarUpdater:(id /* block */)a3 derivedColorDependent:(BOOL)a4 selected:(BOOL)a5;
- (id)initWithColor:(id)a0 skinColor:(id)a1 imageProvider:(id)a2 colorLayerProvider:(id)a3 avatarUpdater:(id /* block */)a4 derivedColorDependent:(BOOL)a5 selected:(BOOL)a6;

@end
