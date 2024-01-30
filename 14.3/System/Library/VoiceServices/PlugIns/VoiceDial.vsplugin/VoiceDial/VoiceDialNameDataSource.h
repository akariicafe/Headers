@interface VoiceDialNameDataSource : NSObject {
    unsigned long long _nameTypeMask;
    BOOL _compositeNamesOnly;
}

+ (id)nameDataSourceForLanguageIdentifier:(id)a0;
+ (id)_nameDataSourceByLanguageMap;

- (unsigned long long)nameTypes;
- (int)matchingNameType:(id)a0 fromTypes:(unsigned long long)a1 forPerson:(void *)a2;
- (unsigned long long)indexOfMainNameOfType:(int)a0;
- (unsigned long long)personNameCount;
- (BOOL)getNth:(unsigned long long)a0 name:(id *)a1 phoneticName:(id *)a2 ofType:(int)a3 nameIndex:(unsigned long long *)a4 forPerson:(void *)a5;
- (BOOL)getName:(id *)a0 phoneticName:(id *)a1 atIndex:(unsigned long long)a2 forPerson:(void *)a3;
- (int)typeOfNameAtIndex:(unsigned long long)a0;
- (unsigned long long)countOfNamesOfType:(int)a0;
- (BOOL)useCompositeNamesOnly;
- (id)copyPronunciationPropertyForPerson:(void *)a0 withNameType:(int)a1;
- (void)setUseCompositeNamesOnly:(BOOL)a0;

@end
