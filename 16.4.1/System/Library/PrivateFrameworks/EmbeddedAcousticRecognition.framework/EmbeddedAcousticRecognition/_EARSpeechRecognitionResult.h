@class NSArray;

@interface _EARSpeechRecognitionResult : NSObject <NSCopying>

@property (readonly, nonatomic) struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *__begin_; struct Token *__end_; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *__value_; } __end_cap_; } quasarTokens;
@property (readonly, nonatomic) struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *__begin_; struct Token *__end_; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *__value_; } __end_cap_; } quasarPreItnTokens;
@property (readonly, copy, nonatomic) NSArray *tokens;
@property (readonly, copy, nonatomic) NSArray *preITNTokens;
@property (readonly, nonatomic) double confidence;
@property (readonly, copy, nonatomic) NSArray *voiceCommandInterpretations;
@property (readonly, copy, nonatomic) NSArray *preITNVoiceCommandInterpretations;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })a0 preITNTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })a1;
- (id)_initWithTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })a0 preITNTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })a1 confidence:(double)a2;
- (id)_initWithTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })a0 preITNTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })a1 confidence:(double)a2 voiceCommandInterpretations:(id)a3 preITNVoiceCommandInterpretations:(id)a4;

@end
