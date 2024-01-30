@class NSMutableDictionary;

@interface AXAlternativeVoices : NSObject

@property (class, nonatomic) BOOL inUnitTestMode;

@property (retain, nonatomic) NSMutableDictionary *voiceClassesMap;
@property (retain, nonatomic) NSMutableDictionary *voiceNameMap;

+ (id)sharedInstance;
+ (BOOL)supportsSiri;
+ (BOOL)supportsAlex;

- (void).cxx_destruct;
- (BOOL)isNashvilleSystemVoice:(id)a0;
- (BOOL)isOldSiriVoiceIdentifier:(id)a0;
- (id)_siriBaseIdentifierFromIdentifier:(id)a0;
- (BOOL)isAlternativeVoice:(id)a0;
- (BOOL)isNeuralSiriVoiceIdentifier:(id)a0;
- (BOOL)isAlexAvailableForLanguage:(id)a0;
- (id)voiceForVoiceIdentifier:(id)a0 forLanguage:(id)a1;
- (id)_siriIdentifierFromBaseIdentifier:(id)a0 language:(id)a1 quality:(long long)a2;
- (BOOL)isSiriVoiceIdentifier:(id)a0;
- (id)nameForVoiceIdentifier:(id)a0;

@end
