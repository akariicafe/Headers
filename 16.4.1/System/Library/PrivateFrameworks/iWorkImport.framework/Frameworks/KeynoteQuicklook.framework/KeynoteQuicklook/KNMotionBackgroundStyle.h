@class TSPData, NSString, TSUColor;

@interface KNMotionBackgroundStyle : TSSStyle <TSSPreset>

@property (retain, nonatomic) TSPData *posterFrameData;
@property (readonly, nonatomic) TSUColor *referenceColor;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)properties;
+ (id)defaultStyleWithContext:(id)a0;
+ (id)defaultValueForProperty:(int)a0;
+ (id)propertiesAllowingNSNull;
+ (id)axDescriptionForStyleIdentifier:(id)a0;
+ (id)backgroundNameForStyleIdentifier:(id)a0;
+ (id)nextUnusedStyleIdentifierInStylesheet:(id)a0;
+ (id)toolTipForStyle:(id)a0;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 name:(id)a1 overridePropertyMap:(id)a2 isVariation:(BOOL)a3;
- (void)setOverridePropertyMap:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)copyAuxiliaryInformationToMigratedStyle:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)loadMotionBackgroundStylePropertiesIntoPropertyMap:(id)a0 fromArchive:(const void *)a1 unarchiver:(id)a2;
- (id)makeAlternateFill;
- (unsigned long long)minimumReadVersion;
- (void)notifyClientsOfUpdate;
- (void)saveMotionBackgroundStylePropertyMap:(id)a0 toArchive:(void *)a1 archiver:(id)a2;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)targetParentForStyleMappingByStyleMapper:(id)a0 intoStylesheet:(id)a1;

@end
