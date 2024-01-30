@class NSString, NSArray;

@interface EARTokenPronounciations : NSObject

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSArray *pronunciations;

- (void).cxx_destruct;
- (id)initWithToken:(id)a0 pronunciations:(id)a1;
- (struct TokenProns { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; struct vector<quasar::PronChoice, std::allocator<quasar::PronChoice>> { struct PronChoice *x0; struct PronChoice *x1; struct __compressed_pair<quasar::PronChoice *, std::allocator<quasar::PronChoice>> { struct PronChoice *x0; } x2; } x1; struct vector<quasar::PronChoice, std::allocator<quasar::PronChoice>> { struct PronChoice *x0; struct PronChoice *x1; struct __compressed_pair<quasar::PronChoice *, std::allocator<quasar::PronChoice>> { struct PronChoice *x0; } x2; } x2; })_quasarProns;

@end
