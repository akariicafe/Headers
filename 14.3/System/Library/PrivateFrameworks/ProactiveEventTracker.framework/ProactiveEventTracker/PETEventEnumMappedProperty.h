@class NSDictionary;

@interface PETEventEnumMappedProperty : PETEventProperty {
    NSDictionary *_enumMap;
    BOOL _autoSanitizeValues;
}

- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)cardinality;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange;
- (id)longestValueString;
- (id)description;
- (id)possibleValues;
- (BOOL)isValidValue:(id)a0;
- (id)initWithName:(id)a0 enumMapping:(id)a1 autoSanitizeValues:(BOOL)a2;

@end
