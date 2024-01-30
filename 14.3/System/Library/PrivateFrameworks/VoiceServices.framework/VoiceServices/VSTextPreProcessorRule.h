@class NSString;

@interface VSTextPreProcessorRule : NSObject {
    NSString *_matchPattern;
    NSString *_replacement;
    BOOL _caseSensitive;
    BOOL _eatPunctuation;
}

- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)matchedString:(id)a0 forTokenInRange:(struct { long long x0; long long x1; } *)a1;

@end
