@class NSString, NSDictionary, SUICVoiceSelectionVoiceCollection;
@protocol SUICVoiceSelectionDataProviderObserving;

@interface SUICVoiceSelectionDefaultDataManager : NSObject <SUICVoiceSelectionDataManaging>

@property (copy, nonatomic) NSString *outputLanguage;
@property (copy, nonatomic) NSDictionary *currentVoiceSelectionForOutputLanguage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *recognitionLanguageCode;
@property (readonly, copy, nonatomic) SUICVoiceSelectionVoiceCollection *voiceSelectionVoiceCollection;
@property (weak, nonatomic) id<SUICVoiceSelectionDataProviderObserving> voiceSelectionDataProviderObserver;

- (void).cxx_destruct;
- (id)init;
- (id)voicesForRecognitionLanguageCode:(id)a0 outputLanguageCode:(id)a1;
- (void)regenerateVoiceCollectionForRecognitionLanguageCode:(id)a0 outputLanguageCode:(id)a1;
- (BOOL)isVoiceSelected:(id)a0;
- (id)dialectLanguageCodeForLanguage:(id)a0;
- (void)setVoiceSelectionVoiceCollection:(id)a0;
- (void)changeSiriVoiceToVoice:(id)a0 completion:(id /* block */)a1;
- (void)changeSiriDialectLanguageToLanguageIdentifiedByLanguageCode:(id)a0 completion:(id /* block */)a1;

@end
