@class SUICVoiceSelectionViewModel, NSString, SUICVoiceSelectionVoiceCollection, AFVoiceInfo;
@protocol SUICVoiceSelectionDisplaying, SUICVoiceSelectionDataManaging, SUICVoicePreviewing, SUICVoiceSelectionPresenterDelegate;

@interface SUICVoiceSelectionPresenter : NSObject <SUICVoiceSelectionDataProviderObserving, SUICVoiceSelectionEventHandling, SUICVoiceSelectionViewModelProviding, SUICVoicePreviewingDelegate> {
    AFVoiceInfo *_voiceBeingPreviewed;
    BOOL _reverseVoiceOrder;
}

@property (readonly, nonatomic) id<SUICVoiceSelectionDataManaging> dataManager;
@property (readonly, copy, nonatomic) SUICVoiceSelectionVoiceCollection *voiceCollection;
@property (readonly, nonatomic) id<SUICVoiceSelectionDisplaying> view;
@property (readonly, nonatomic) id<SUICVoicePreviewing> voicePreviewer;
@property (readonly, weak, nonatomic) id<SUICVoiceSelectionPresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) SUICVoiceSelectionViewModel *voiceSelectionViewModel;

- (void)stopVoicePreview;
- (void).cxx_destruct;
- (void)_determineVoiceOrdering;
- (id)_localizedDisplayNameForLanguageCode:(id)a0;
- (void)_logVoicePreview:(id)a0;
- (void)_previewVoice:(id)a0 completion:(id /* block */)a1;
- (void)_processVoiceSelection:(id)a0 completion:(id /* block */)a1;
- (id)_voiceCollection;
- (id)initWithDataManaging:(id)a0 view:(id)a1 delegate:(id)a2 voicePreviewing:(id)a3 recognitionLanguage:(id)a4;
- (void)selectRandomVoiceWithCompletion:(id /* block */)a0;
- (void)voicePreviewerAudioOutputDidChangePowerLevel:(float)a0;
- (void)voiceSelectionDataProviderVoiceCollectionDidChange:(id)a0;
- (void)voiceSelectionView:(id)a0 receivedRequestToSelectLanguage:(id)a1;
- (void)voiceSelectionView:(id)a0 receivedRequestToSelectVoice:(id)a1;

@end
