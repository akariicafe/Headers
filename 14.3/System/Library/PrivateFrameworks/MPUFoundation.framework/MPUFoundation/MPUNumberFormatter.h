@interface MPUNumberFormatter : NSFormatter {
    void **_shortNumberFormatter;
}

- (id)init;
- (void)dealloc;
- (void)resetFormatter;
- (void)createFormatter;
- (id)shortStringFromNumber:(long long)a0;

@end
