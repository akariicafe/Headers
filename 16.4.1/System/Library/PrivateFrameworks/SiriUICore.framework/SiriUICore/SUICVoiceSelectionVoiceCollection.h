@class NSString, NSArray, NSSet, AFVoiceInfo;

@interface SUICVoiceSelectionVoiceCollection : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, copy, nonatomic) NSArray *dialectLanguageCodes;
@property (readonly, copy, nonatomic) AFVoiceInfo *currentVoice;
@property (readonly, copy, nonatomic) NSSet *alternativeVoices;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithLanguageCode:(id)a0 dialectLanguageCodes:(id)a1 currentVoice:(id)a2 alternativeVoices:(id)a3;
- (id)randomVoice;

@end
