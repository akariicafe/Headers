@class NSString;

@interface _EARFormatter : NSObject {
    struct unique_ptr<SpeechITN, std::default_delete<SpeechITN>> { struct __compressed_pair<SpeechITN *, std::default_delete<SpeechITN>> { struct SpeechITN *__value_; } __ptr_; } _itn;
}

@property (copy, nonatomic) NSString *language;

+ (void)initialize;
+ (BOOL)supportedByQuasarConfig:(id)a0;
+ (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })convertStringsToQuasarTokens:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })formatWords:(const void *)a0 unrepairedWordsOut:(void *)a1 task:(id)a2 language:(id)a3 leftContext:(const void *)a4 separateAutoEndPunctuation:(BOOL)a5 partialResults:(void *)a6 timestampOffset:(unsigned int)a7 zeroTimestamp:(BOOL)a8 continuousListeningConfig:(struct shared_ptr<quasar::ContinuousListeningConfig> { struct ContinuousListeningConfig *x0; struct __shared_weak_count *x1; })a9 itnLeftContext:(const void *)a10 itnResult:(void *)a11;
- (id)initWithLanguage:(id)a0 withSdapiConfig:(id)a1 quasarConfig:(id)a2;
- (id)initWithQuasarConfig:(id)a0 overrideConfigFiles:(id)a1;
- (id)initWithGeneralVoc:(id)a0 withLexiconEnh:(id)a1 withItnEnh:(id)a2;
- (id)initWithQuasarConfig:(id)a0;
- (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })formatWords:(const void *)a0 unrepairedWordsOut:(void *)a1 task:(id)a2;
- (id)formattedStringWithStrings:(id)a0 preToPostItnArray:(id)a1;
- (id)formattedStringWithStrings:(id)a0;
- (id)formattedStringWithStrings:(id)a0 task:(id)a1;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })getOrthography:(const void *)a0;
- (id)formattedStringWithStrings:(id)a0 preToPostItnArray:(id)a1 task:(id)a2;
- (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })formatWords:(const void *)a0 unrepairedWordsOut:(void *)a1;
- (id)initWithQuasarConfig:(id)a0 language:(id)a1;
- (id)formattedRecognitionWithNBestList:(id)a0;

@end
