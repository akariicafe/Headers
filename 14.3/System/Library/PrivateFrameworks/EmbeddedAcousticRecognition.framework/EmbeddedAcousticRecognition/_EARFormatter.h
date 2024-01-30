@class NSString;

@interface _EARFormatter : NSObject {
    struct unique_ptr<SpeechITN, std::__1::default_delete<SpeechITN> > { struct __compressed_pair<SpeechITN *, std::__1::default_delete<SpeechITN> > { struct SpeechITN *__value_; } __ptr_; } _itn;
}

@property (copy, nonatomic) NSString *language;

+ (void)initialize;
+ (BOOL)supportedByQuasarConfig:(id)a0;
+ (struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token *x0; } x2; })convertStringsToQuasarTokens:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token *x0; } x2; })formatWords:(const struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token *x0; } x2; } *)a0 task:(id)a1 language:(id)a2;
- (id)initWithLanguage:(id)a0 withSdapiConfig:(id)a1 quasarConfig:(id)a2;
- (id)initWithQuasarConfig:(id)a0 overrideConfigFiles:(id)a1;
- (id)initWithGeneralVoc:(id)a0 withLexiconEnh:(id)a1 withItnEnh:(id)a2;
- (id)initWithQuasarConfig:(id)a0;
- (struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token *x0; } x2; })formatWords:(const struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token *x0; } x2; } *)a0 task:(id)a1;
- (id)formattedStringWithStrings:(id)a0 preToPostItnArray:(id)a1;
- (id)formattedStringWithStrings:(id)a0;
- (id)formattedStringWithStrings:(id)a0 task:(id)a1;
- (struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })getOrthography:(const struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token *x0; } x2; } *)a0;
- (id)formattedStringWithStrings:(id)a0 preToPostItnArray:(id)a1 task:(id)a2;
- (struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token *x0; } x2; })formatWords:(const struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token *x0; } x2; } *)a0;
- (id)initWithQuasarConfig:(id)a0 language:(id)a1;
- (id)formattedRecognitionWithNBestList:(id)a0;

@end
