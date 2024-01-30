@class NSMutableDictionary;

@interface AXAlternativeVoices : NSObject

@property (class, nonatomic) BOOL inUnitTestMode;

@property (retain, nonatomic) NSMutableDictionary *voiceClassesMap;
@property (retain, nonatomic) NSMutableDictionary *voiceNameMap;

+ (id)sharedInstance;
+ (BOOL)supportsAlex;

- (void).cxx_destruct;
- (id)_siriBaseIdentifierFromIdentifier:(id)a0;
- (id)_siriIdentifierFromBaseIdentifier:(id)a0 language:(id)a1 quality:(long long)a2;
- (BOOL)isAlexAvailableForLanguage:(id)a0;
- (BOOL)isAlternativeVoice:(id)a0;
- (BOOL)isCombinedVocalizerVoiceIdentifier:(id)a0;
- (BOOL)isCompactVocalizerVoiceIdentifier:(id)a0;
- (BOOL)isMacinTalkVoice:(id)a0;
- (BOOL)isNeuralSiriVoiceIdentifier:(id)a0;
- (BOOL)isOldSiriVoiceIdentifier:(id)a0;
- (BOOL)isSiriVoiceIdentifier:(id)a0;
- (BOOL)isVocalizerVoiceIdentifier:(id)a0;
- (id)nameForVoiceIdentifier:(id)a0;
- (id)voiceForVoiceIdentifier:(id)a0 forLanguage:(id)a1;

@end
