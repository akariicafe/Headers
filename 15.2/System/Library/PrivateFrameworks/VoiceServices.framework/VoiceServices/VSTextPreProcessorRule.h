@class NSString;

@interface VSTextPreProcessorRule : NSObject {
    NSString *_matchPattern;
    NSString *_replacement;
    BOOL _caseSensitive;
    BOOL _eatPunctuation;
}

- (id)initWithDictionaryRepresentation:(id)a0;
- (void)dealloc;
- (id)matchedString:(id)a0 forTokenInRange:(struct { long long x0; long long x1; } *)a1;

@end
