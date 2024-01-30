@class AssistantSettingsSignalEmitter, NSDate;

@interface AssistantLanguageController : PSListItemsController {
    NSDate *_startDate;
    AssistantSettingsSignalEmitter *_signalEmitter;
}

+ (id)bundle;

- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)languageCodeDidChange:(id)a0;
- (void)_signalDidSelectVoice;

@end
