@class NSDictionary;

@interface PETEventEnumMappedProperty : PETEventProperty {
    NSDictionary *_enumMap;
    BOOL _autoSanitizeValues;
}

- (id)initWithName:(id)a0 enumMapping:(id)a1 autoSanitizeValues:(BOOL)a2;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (BOOL)isValidValue:(id)a0;
- (id)description;
- (id)longestValueString;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange;
- (id)possibleValues;
- (unsigned long long)cardinality;

@end
