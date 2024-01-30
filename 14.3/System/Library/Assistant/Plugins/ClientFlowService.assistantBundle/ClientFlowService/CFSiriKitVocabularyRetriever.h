@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CFSiriKitVocabularyRetriever : NSObject

@property int siriKitVocabNotificationToken;
@property (retain) NSDictionary *appContactVocabularyDictionary;
@property (retain) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)vocabularyStringsForAppBundleId:(id)a0 vocabularyType:(long long)a1 query:(id)a2;
- (void)fetchContactVocabularyEntities;
- (BOOL)isValidInputString:(id)a0;
- (id)vocabularyEntryWithContactNamed:(id)a0 forApp:(id)a1;

@end
