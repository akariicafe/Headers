@class NSString;

@interface MNAudioSystemEvent : NSObject

@property (readonly, copy, nonatomic) NSString *utterance;
@property (readonly, nonatomic) unsigned long long shortPrompt;
@property (readonly, nonatomic) unsigned long long guidanceLevel;
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic) BOOL hasSoundEffect;
@property (readonly, copy, nonatomic) id /* block */ handler;

- (id)description;
- (BOOL)isEqualToEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithUtterance:(id)a0 andShortPrompt:(unsigned long long)a1 andVoiceGuidanceLevel:(unsigned long long)a2 andCompletion:(id /* block */)a3;

@end
