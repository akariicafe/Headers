@class NSNumberFormatter;

@interface TSUNumberOrDateOrDurationFormatter : NSFormatter {
    NSNumberFormatter *mNumberFormatter;
}

- (id)init;
- (void)dealloc;
- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;

@end
