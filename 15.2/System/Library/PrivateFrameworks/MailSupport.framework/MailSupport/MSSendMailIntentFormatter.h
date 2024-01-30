@interface MSSendMailIntentFormatter : NSFormatter

- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (BOOL)allowsReverseTransformation;
- (id)_stringForAddresses:(id)a0;

@end
