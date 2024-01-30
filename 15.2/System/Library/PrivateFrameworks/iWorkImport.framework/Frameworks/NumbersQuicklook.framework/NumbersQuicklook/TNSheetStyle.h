@interface TNSheetStyle : TSSStyle

+ (id)properties;
+ (id)sheetStyleIDForPreset:(unsigned long long)a0;
+ (id)defaultSheetStyleWithContext:(id)a0;

- (id)backgroundColor;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadSheetStylePropertiesIntoPropertyMap:(id)a0 fromArchive:(const void *)a1 unarchiver:(id)a2;
- (void)saveSheetStylePropertiesToArchive:(void *)a0 archiver:(id)a1;
- (unsigned long long)minimumReadVersion;

@end
