@class OADCharacterProperties;

@interface OADTextRun : NSObject {
    OADCharacterProperties *mProperties;
}

- (id)description;
- (id)properties;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)characterCount;
- (void)setProperties:(id)a0;
- (void)removeUnnecessaryOverrides;
- (BOOL)isSimilarToTextRun:(id)a0;

@end
