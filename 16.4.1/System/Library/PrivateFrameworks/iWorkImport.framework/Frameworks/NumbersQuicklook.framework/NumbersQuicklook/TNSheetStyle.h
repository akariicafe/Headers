@interface TNSheetStyle : TSSStyle

+ (id)properties;
+ (id)defaultSheetStyleWithContext:(id)a0;
+ (id)sheetStyleIDForPreset:(unsigned long long)a0;

- (id)backgroundColor;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (unsigned long long)minimumReadVersion;
- (void)loadSheetStylePropertiesIntoPropertyMap:(id)a0 fromArchive:(const void *)a1 unarchiver:(id)a2;
- (void)saveSheetStylePropertiesToArchive:(void *)a0 archiver:(id)a1;

@end
