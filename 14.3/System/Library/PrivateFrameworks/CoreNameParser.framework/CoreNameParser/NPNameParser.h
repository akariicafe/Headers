@class NPHMMClassifier, NPNameComponentsData;

@interface NPNameParser : NSObject {
    double _confidenceThreshold;
    NPNameComponentsData *_nameComponentsData;
}

@property (retain) NPHMMClassifier *classifier;

- (id)parseKoreanName:(id)a0;
- (unsigned long long)frequencyOfLatinFamilyName:(id)a0;
- (id)normalizedAffix:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)parseJapaneseName:(id)a0 normalize:(BOOL)a1;
- (id)normalizeFullname:(id)a0;
- (id)parseFullnameWithDefaultHMMClassifier:(id)a0;
- (unsigned long long)namingTraditionForName:(id)a0;
- (id)parseChineseName:(id)a0;
- (unsigned long long)genderMajorityForGivenName:(id)a0;
- (id)parseLatinName:(id)a0 score:(double *)a1;
- (id)parseKoreanName:(id)a0 normalize:(BOOL)a1;
- (id)personNameCompomentsFromPrefix:(id)a0 suffix:(id)a1 givenNames:(id)a2 middleNames:(id)a3 familyNames:(id)a4;
- (id)parseFullnameWithDefaultHMMClassifier:(id)a0 normalize:(BOOL)a1 score:(double *)a2;
- (BOOL)isPrefix:(id)a0;
- (BOOL)isSuffix:(id)a0;
- (id)parseJapaneseName:(id)a0;
- (id)personNameComponentsFromString:(id)a0;
- (id)parseChineseName:(id)a0 normalize:(BOOL)a1;
- (struct _CFBurstTrie { } *)sharedNameFrequencyTrieRef;
- (unsigned long long)frequencyOfLatinGivenName:(id)a0;

@end
