@class TSWPParagraphStyle;

@interface TSATheme : TSSTheme

@property (readonly, nonatomic) TSWPParagraphStyle *titleTextPreset;
@property (readonly, nonatomic) TSWPParagraphStyle *captionTextPreset;

+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(unsigned long long)a2;
+ (id)presetKinds;
+ (void)registerPresetSourceClasses;
+ (id)localizedNameForPresetKind:(id)a0;
+ (id)localizedNameForStylePickerTitle:(id)a0;
+ (id)localizedTitleForApplyStyleMenuItem:(id)a0;
+ (id)localizedTitleForCreateStyleMenuItem:(id)a0;

- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)addCaptionTextStylePresets;
- (void)addCaptionTextStylePresetsForPowerPointImport;

@end
