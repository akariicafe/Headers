@interface CMNumberFormatter : NSObject {
    int _format;
    int _language;
    void **_numberFormatter;
}

+ (id)formatterForNumberFormat:(int)a0 language:(int)a1;

- (void)dealloc;
- (id)initWithNumberFormat:(int)a0 language:(int)a1;
- (id)stringForNumber:(unsigned long long)a0;

@end
