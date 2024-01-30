@interface NSDataDetector : NSRegularExpression {
    unsigned long long _types;
}

@property (readonly) unsigned long long checkingTypes;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)dataDetectorWithTypes:(unsigned long long)a0 error:(id *)a1;

- (void)dealloc;
- (id)initWithPattern:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithTypes:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)numberOfCaptureGroups;
- (void)enumerateMatchesInString:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 usingBlock:(id /* block */)a3;
- (id)pattern;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)options;

@end
