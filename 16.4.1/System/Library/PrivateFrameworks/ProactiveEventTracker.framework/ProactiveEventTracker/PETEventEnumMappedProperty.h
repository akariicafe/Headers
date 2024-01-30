@class NSDictionary;

@interface PETEventEnumMappedProperty : PETEventProperty {
    NSDictionary *_enumMap;
    BOOL _autoSanitizeValues;
}

- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (BOOL)isValidValue:(id)a0;
- (id)longestValueString;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange;
- (unsigned long long)cardinality;
- (id)initWithName:(id)a0 enumMapping:(id)a1 autoSanitizeValues:(BOOL)a2;
- (id)description;
- (id)possibleValues;
- (void).cxx_destruct;

@end
