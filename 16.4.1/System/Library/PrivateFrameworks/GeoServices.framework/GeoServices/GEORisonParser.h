@class NSMutableCharacterSet, NSNumberFormatter;

@interface GEORisonParser : NSObject {
    NSNumberFormatter *_formatter;
    NSMutableCharacterSet *_risonTerminators;
    NSMutableCharacterSet *_risonEscapes;
}

- (id)init;
- (void).cxx_destruct;
- (id)stringFromNumber:(id)a0;
- (id)stringFromNull:(id)a0;
- (id)arrayWithReaderInfo:(struct { char *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (id)boolWithReaderInfo:(struct { char *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (id)dictionaryWithReaderInfo:(struct { char *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (id)keyWithReaderInfo:(struct { char *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (id)nullWithReaderInfo:(struct { char *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (id)numberWithReaderInfo:(struct { char *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (id)objectFromRisonString:(id)a0;
- (id)objectWithReaderInfo:(struct { char *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (id)stringFromArray:(id)a0;
- (id)stringFromDictionary:(id)a0;
- (id)stringFromRisonObject:(id)a0;
- (id)stringFromString:(id)a0;
- (id)stringLiteralWithReaderInfo:(struct { char *x0; unsigned long long x1; unsigned long long x2; } *)a0;

@end
