@class SiriNLUMarisaTrie;

@interface SiriNLUOverridesTrieBundle : NSObject {
    SiriNLUMarisaTrie *ruleTrie;
    SiriNLUMarisaTrie *patternTrie;
    SiriNLUMarisaTrie *overrideIdTrie;
    SiriNLUMarisaTrie *userParseTrie;
    SiriNLUMarisaTrie *overrideTimeStampTrie;
}

+ (id)buildPatternTrieLookupKey:(id)a0 locale:(id)a1 overrideNamespace:(long long)a2;
+ (id)getTrieURLs:(id)a0;

- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)fetchOverrideId:(id)a0;
- (id)fetchOverrideIdArray:(id)a0;
- (unsigned long long)fetchOverrideTimeStamp:(id)a0;
- (id)fetchRegexRuleIds;
- (id)fetchRuleId:(id)a0 locale:(id)a1 overrideNamespace:(long long)a2;
- (id)fetchSerializedNluRequestRule:(id)a0;
- (id)fetchSerializedUserParse:(id)a0;

@end
