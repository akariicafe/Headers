@class NSArray, NSDictionary, NSString;

@interface CESRUserData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *contactWordsWithFrequency;
@property (copy, nonatomic) NSDictionary *vocabularyWords;
@property (copy, nonatomic) NSArray *appNames;
@property (copy, nonatomic) NSDictionary *interactionSenderDisplayNames;
@property (copy, nonatomic) NSDictionary *searchEventValues;
@property (copy, nonatomic) NSArray *locationOfInterestNames;
@property (copy, nonatomic) NSArray *spatialLocationOfInterestNames;
@property (copy, nonatomic) NSArray *eventTitles;
@property (copy, nonatomic) NSArray *eventLocationNames;
@property (copy, nonatomic) NSDictionary *keyboardLMDynamicVocabularyItems;
@property (copy, nonatomic) NSArray *pexNamedEntityNames;
@property (copy, nonatomic) NSArray *corrections;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *language;

+ (void)_fetchFromSiriKitWithKeepGoing:(id /* block */)a0 contactNames:(id *)a1 contactGroupNames:(id *)a2 vocabularyWords:(id *)a3;
+ (void)fetchUserDataWithLanguage:(id)a0 options:(id)a1 keepGoing:(id /* block */)a2 completion:(id /* block */)a3;
+ (id)_fetchFromMediaPlayerWithKeepGoing:(id /* block */)a0;
+ (void)fetchUserDataWithLanguage:(id)a0 options:(id)a1 completion:(id /* block */)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)_fetchRankedContactIDsWithPSContactSuggester:(id)a0 UpTo:(unsigned long long)a1;
- (void)_fetchContactsWithKeepGoing:(id /* block */)a0 options:(id)a1 siriKitContactNames:(id)a2 siriKitContactGroupNames:(id)a3;
- (id)_initWithLanguage:(id)a0;
- (void)_fetchCoreDuetInteractionsWithKeepGoing:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_fetchCoreDuetSearchEventsWithKeepGoing:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_fetchCoreRoutineWithKeepGoing:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_fetchPortraitWithKeepGoing:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_fetchCorrectionsWithKeepGoing:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_fetchContactsAndSiriKitWithKeepGoing:(id /* block */)a0 options:(id)a1 vocabularyWords:(id *)a2;
- (id)_fetchHomeKitVocabularyWithKeepGoing:(id /* block */)a0;
- (void)_fetchDynamicKeyboardLanguageModelWithKeepGoing:(id /* block */)a0;
- (void)_fetchAppsWithKeepGoing:(id /* block */)a0;
- (void)_fetchEventKitWithKeepGoing:(id /* block */)a0;

@end
