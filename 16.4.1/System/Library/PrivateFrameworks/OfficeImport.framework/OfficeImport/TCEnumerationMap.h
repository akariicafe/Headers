@interface TCEnumerationMap : NSObject {
    struct __CFDictionary { } *m_valueToString;
    struct __CFDictionary { } *m_stringToValue;
    BOOL m_caseSensitive;
}

- (void)dealloc;
- (id)stringForValue:(int)a0;
- (long long)valueForString:(id)a0;
- (void)enumerateValuesAndStringsUsingBlock:(id /* block */)a0;
- (id)initWithStructs:(const struct TCEnumerationStruct { int x0; id x1; } *)a0 count:(int)a1;
- (id)initWithStructs:(const struct TCEnumerationStruct { int x0; id x1; } *)a0 count:(int)a1 caseSensitive:(BOOL)a2;

@end
