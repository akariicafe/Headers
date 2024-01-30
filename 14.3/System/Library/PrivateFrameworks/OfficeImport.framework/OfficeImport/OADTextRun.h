@class OADCharacterProperties;

@interface OADTextRun : NSObject {
    OADCharacterProperties *mProperties;
}

- (void)setProperties:(id)a0;
- (BOOL)isEmpty;
- (id)init;
- (id)properties;
- (void).cxx_destruct;
- (unsigned long long)characterCount;
- (id)description;
- (void)removeUnnecessaryOverrides;
- (BOOL)isSimilarToTextRun:(id)a0;

@end
