@interface _UISettings : PTSettings

+ (id)_dictionaryForColor:(id)a0;
+ (id)settingsFromArchiveFile:(id)a0 error:(id *)a1;
+ (id)_dictionaryForFont:(id)a0;
+ (id)_colorFromDictionary:(id)a0;
+ (id)_fontFromDictionary:(id)a0;
+ (BOOL)_supportsArchivingCustomClass:(Class)a0;
+ (BOOL)_supportsArchivingStructType:(id)a0;
+ (id)_archiveDictionaryForObject:(id)a0 ofCustomClass:(Class)a1;
+ (id)_archiveDictionaryForValue:(id)a0 ofStructType:(id)a1;
+ (id)_objectOfCustomClass:(Class)a0 fromArchiveDictionary:(id)a1;
+ (id)_valueOfStructType:(id)a0 fromArchiveDictionary:(id)a1;

- (id)initWithDefaultValues;
- (BOOL)archiveToFile:(id)a0 error:(id *)a1;
- (BOOL)restoreFromArchiveFile:(id)a0 error:(id *)a1;
- (void)setValuesFromModel:(id)a0;

@end
