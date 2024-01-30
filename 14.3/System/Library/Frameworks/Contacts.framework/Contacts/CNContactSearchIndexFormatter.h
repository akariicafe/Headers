@interface CNContactSearchIndexFormatter : NSFormatter

- (id)auxiliaryIndexStringForContact:(id)a0;
- (id)nameExpansionsForContact:(id)a0;
- (id)stringForObjectValue:(id)a0;
- (id)stringFromContact:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;

@end
