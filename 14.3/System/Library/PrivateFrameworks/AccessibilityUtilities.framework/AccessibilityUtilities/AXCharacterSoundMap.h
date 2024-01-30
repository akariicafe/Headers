@class NSMutableDictionary;

@interface AXCharacterSoundMap : NSObject

@property (retain, nonatomic) NSMutableDictionary *phDictionaries;

- (id)init;
- (void).cxx_destruct;
- (id)_linguisticStringForCharacter:(id)a0 language:(id)a1 linguisticType:(long long)a2 andVoiceIdentifier:(id)a3;
- (id)phonemeStringForCharacter:(id)a0 forLanguage:(id)a1 andVoiceIdentifier:(id)a2;
- (id)phoneticStringForCharacter:(id)a0 forLanguage:(id)a1 andVoiceIdentifier:(id)a2;

@end
