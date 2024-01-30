@class NSString;

@interface MNVoiceEvent : NSObject

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) NSString *textToSpeak;
@property (readonly, nonatomic) unsigned long long shortPromptType;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) BOOL isPrivate;

+ (id)eventWithText:(id)a0 fallbackPrompt:(unsigned long long)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
+ (BOOL)isValidShortPromptType:(unsigned long long)a0;

- (void).cxx_destruct;
- (BOOL)isEqualToEvent:(id)a0;
- (id)description;
- (id)initWithText:(id)a0 fallbackPrompt:(unsigned long long)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;

@end
