@class NSArray, NSDictionary, SGPatternDataFile, NSHashTable, NSMutableSet;

@interface SGPatternGlobalData : NSObject {
    NSDictionary *patternDict;
    SGPatternDataFile *patternData;
    int globalLanguageVersion;
    NSArray *currentLanguages;
    NSHashTable *patternInstances;
    BOOL useAllLanguages;
    NSMutableSet *regexesImmuneToDeath;
}

- (void).cxx_destruct;

@end
