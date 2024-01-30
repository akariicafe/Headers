@class NSNumberFormatter;

@interface TSUNumberOrDateOrDurationFormatter : NSFormatter {
    NSNumberFormatter *mNumberFormatter;
}

- (id)stringForObjectValue:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;

@end
