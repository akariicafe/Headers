@interface UTF8Formatter : APFormatter {
    unsigned long long _maxByteCount;
}

+ (id)afpSet;
+ (id)utf8Formatter:(unsigned long long)a0;
+ (id)utf8Formatter;
+ (id)utf8FormatterWithMaxByteCount:(unsigned long long)a0 maxLength:(unsigned long long)a1;
+ (id)afpFormatter:(unsigned long long)a0;

- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (id)initWithMaxByteCount:(unsigned long long)a0 maxLength:(unsigned long long)a1;
- (id)initAFPFormatterWithLength:(unsigned long long)a0;
- (void)setMaxByteCount:(unsigned long long)a0;
- (unsigned long long)maxByteCount;

@end
