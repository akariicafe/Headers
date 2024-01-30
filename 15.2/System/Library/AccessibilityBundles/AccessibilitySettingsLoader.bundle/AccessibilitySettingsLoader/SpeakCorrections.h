@class AVSpeechSynthesizer, NSString, NSDictionary, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface SpeakCorrections : NSObject <AVSpeechSynthesizerDelegate> {
    AVSpeechSynthesizer *_synthesizer;
    BOOL _correctionCanceled;
    NSDictionary *_keyboardToLanguage;
    NSArray *_availableLanguageCodes;
    NSObject<OS_dispatch_queue> *_speakingQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)disable;
+ (void)enable;
+ (void)updateStatus;
+ (void)_updateRingerState;
+ (void)_safeUpdateRingerState;

- (void)_ringerChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_correctionDisplayed:(id)a0;
- (void)_speakCorrection:(id)a0;
- (void)loadUIAccessibilityIfNecessary;

@end
