@class NSString, NSMutableDictionary, NSURL, NSLocale, NSDate;
@protocol RKDisplayStringsProvider;

@interface RKPersistentPersonalizer : NSObject {
    void *_model;
}

@property (retain) NSString *languageID;
@property (retain) NSLocale *languageLocale;
@property (retain) NSURL *dynamicDataURL;
@property (readonly) id<RKDisplayStringsProvider> displayStringsProvider;
@property (readonly) void *model;
@property (retain) NSDate *lastObservedDynamicDataCreationDate;
@property (retain) NSDate *lastDynamicDataCreationCheckDate;
@property (retain) NSMutableDictionary *synonyms;

+ (void)removeAllDynamicModelsInDirectory:(id)a0;
+ (id)nonEmptyStringsPredicate;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)flushDynamicData;
- (id)headwordsForSynonym:(id)a0;
- (id)topSynonymsForSpeechAct:(id)a0 headword:(id)a1 recipientContext:(id)a2 maxCount:(unsigned long long)a3;
- (id)headwordsForSynonymPrefix:(id)a0;
- (void)trainSynonymForSpeechAct:(id)a0 headword:(id)a1 userResponse:(id)a2 recipientContext:(id)a3 weight:(unsigned long long)a4 effectiveDate:(id)a5;
- (id)initWithLanguageIdentifier:(id)a0 andDynamicDataURL:(id)a1 displayStringsProvider:(id)a2;
- (void *)createLanguageModel;
- (id)dynamicDataCreationDate;
- (void)initializeDynamicLanguageModel;

@end
