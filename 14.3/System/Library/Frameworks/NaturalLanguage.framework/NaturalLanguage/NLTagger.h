@class NSArray, NSString, NSMutableDictionary;

@interface NLTagger : NSObject {
    NSArray *_schemes;
    NSString *_string;
    void *_tagger;
    NSMutableDictionary *_customModels;
    NSMutableDictionary *_customModelDictionaries;
    NSMutableDictionary *_classifierCaches;
    NSMutableDictionary *_sequenceCaches;
    NSMutableDictionary *_customGazetteers;
    NSMutableDictionary *_customGazetteerDictionaries;
}

@property (readonly, copy, nonatomic) NSArray *tagSchemes;
@property (retain, nonatomic) NSString *string;
@property (readonly, copy, nonatomic) NSString *dominantLanguage;

+ (id)availableTagSchemesForUnit:(long long)a0 language:(id)a1;
+ (id)availableTagSchemesForLanguage:(id)a0;
+ (void)registerForAssetNotifications;
+ (void)requestAssetsForLanguage:(id)a0 tagScheme:(id)a1 completionHandler:(id /* block */)a2;

- (id)_customHypothesesAtIndex:(unsigned long long)a0 unit:(long long)a1 scheme:(id)a2 maximumCount:(unsigned long long)a3 options:(unsigned long long)a4 modelDictionary:(id)a5 gazetteerDictionary:(id)a6;
- (void)stringEditedInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 changeInLength:(long long)a1;
- (id)_customModelAtIndex:(unsigned long long)a0 unit:(long long)a1 modelDictionary:(id)a2;
- (id)_customTagAtIndex:(unsigned long long)a0 unit:(long long)a1 scheme:(id)a2 options:(unsigned long long)a3 modelDictionary:(id)a4 gazetteerDictionary:(id)a5;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })tokenRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 unit:(long long)a1;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })tokenRangeAtIndex:(unsigned long long)a0 unit:(long long)a1;
- (id)_customHypothesesAtIndex:(unsigned long long)a0 fromHypothesisDictionary:(id)a1;
- (void)setModels:(id)a0 forTagScheme:(id)a1;
- (void)setGazetteers:(id)a0 forTagScheme:(id)a1;
- (void)dealloc;
- (id)_tagSchemeForScheme:(id)a0;
- (id)_customTagAtIndex:(unsigned long long)a0 fromTagDictionary:(id)a1;
- (id)_customHypothesisDictionaryForSentence:(id)a0 options:(unsigned long long)a1 model:(id)a2 gazetteer:(id)a3 maximumCount:(unsigned long long)a4;
- (id)tagsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 unit:(long long)a1 scheme:(id)a2 options:(unsigned long long)a3 tokenRanges:(id *)a4;
- (void)setLanguage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setOrthography:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)description;
- (id)_customGazetteerAtIndex:(unsigned long long)a0 unit:(long long)a1 gazetteerDictionary:(id)a2;
- (id)modelsForTagScheme:(id)a0;
- (void)enumerateTagsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 unit:(long long)a1 scheme:(id)a2 options:(unsigned long long)a3 usingBlock:(id /* block */)a4;
- (id)gazetteersForTagScheme:(id)a0;
- (id)tagAtIndex:(unsigned long long)a0 unit:(long long)a1 scheme:(id)a2 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (id)tagHypothesesAtIndex:(unsigned long long)a0 unit:(long long)a1 scheme:(id)a2 maximumCount:(unsigned long long)a3 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a4;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })sentenceRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_customTagDictionaryForSentence:(id)a0 options:(unsigned long long)a1 model:(id)a2 gazetteer:(id)a3;
- (id)initWithTagSchemes:(id)a0;

@end
