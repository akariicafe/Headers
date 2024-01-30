@class NSNumberFormatter;

@interface TSUNumberOrDateOrDurationFormatter : NSFormatter {
    NSNumberFormatter *mNumberFormatter;
}

- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (void)dealloc;
- (id)init;

@end
