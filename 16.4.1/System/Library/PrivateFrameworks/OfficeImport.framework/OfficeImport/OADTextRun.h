@class OADCharacterProperties;

@interface OADTextRun : NSObject {
    OADCharacterProperties *mProperties;
}

- (BOOL)isEmpty;
- (void)setProperties:(id)a0;
- (id)properties;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)characterCount;
- (BOOL)isSimilarToTextRun:(id)a0;
- (void)removeUnnecessaryOverrides;

@end
