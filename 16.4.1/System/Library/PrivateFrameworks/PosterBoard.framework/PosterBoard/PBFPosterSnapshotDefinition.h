@class NSString, PBUIImageOnDiskFormat, UITraitCollection;

@interface PBFPosterSnapshotDefinition : NSObject <NSCopying> {
    NSString *_persistenceIdentifier;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) BOOL includesHeaderElements;
@property (readonly, nonatomic) BOOL includesComplications;
@property (readonly, nonatomic) unsigned long long layerSet;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic, getter=isUnlocked) BOOL unlocked;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) unsigned long long significantEventsCounter;
@property (readonly, copy, nonatomic) PBUIImageOnDiskFormat *onDiskFormat;

+ (id)defaultPreviewDefinitions;
+ (id)bestDefaultTraitCollection;
+ (BOOL)urlIsForSnapshot:(id)a0;
+ (id)switcherFloatingLayerSnapshotDefinition;
+ (id)defaultConfigurationDefinitions;
+ (id)gallerySnapshotDefinition;
+ (id)switcherUnlockedSnapshotDefinition;
+ (id)editingConfirmationDefinition;
+ (id)galleryHeroSnapshotDefinition;
+ (id)defaultPreviewDefinitionForPreview:(id)a0;
+ (id)gallerySnapshotWithComplicationsDefinition;
+ (id)switcherSnapshotDefinition;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)_persistenceIdentitifer;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 uniqueIdentifier:(id)a1;
- (id)definitionWithSignificantEventsCounter:(unsigned long long)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 includeHeaderElements:(BOOL)a1 includesComplications:(BOOL)a2 layerSet:(unsigned long long)a3 isUnlocked:(BOOL)a4 uniqueIdentifier:(id)a5;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 includeHeaderElements:(BOOL)a1 uniqueIdentifier:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToDefinition:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)_shouldBePersistedOnlyTemporarily;
- (id)imageEncoderForConfiguredProperties:(id)a0 path:(id)a1;
- (BOOL)urlMatchesOnDiskFormat:(id)a0;
- (id)urlForConfiguredProperties:(id)a0 path:(id)a1;
- (id)description;
- (id)compatibleWithTraitCollection:(id)a0;
- (void).cxx_destruct;

@end
