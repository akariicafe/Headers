@class NSString, AXKonaParameters;

@interface AXKonaVoice : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long konaLanguage;
@property (retain, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) long long eciVoiceNumber;
@property (retain, nonatomic) AXKonaParameters *parameters;

- (void).cxx_destruct;

@end
