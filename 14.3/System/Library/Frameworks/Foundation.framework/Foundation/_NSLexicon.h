@class NSString, NSData;

@interface _NSLexicon : NSObject {
    NSData *_data;
}

@property (readonly, copy, nonatomic) NSString *languageCode;

+ (id)systemLexiconForLanguageCode:(id)a0;

- (id)_lemmasInLikelihoodOrderForWord:(id)a0 matchingWordAttributes:(struct { long long x0; long long x1; long long x2; long long x3; unsigned long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; BOOL x19; BOOL x20; BOOL x21; })a1;
- (id)initWithContentsOfURL:(id)a0 languageCode:(id)a1 error:(id *)a2;
- (void)dealloc;
- (id)lemmasForWord:(id)a0;

@end
