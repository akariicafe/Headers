@class NSEnumerator, ML3DatabaseConnection;

@interface _ML3SortMapFaultingNameOrderDictionaryEnumerator : NSEnumerator {
    NSEnumerator *_dirtyInsertsEnumerator;
    ML3DatabaseConnection *_connection;
    unsigned long long _offset;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithDirtyInsertsEnumerator:(id)a0 connection:(id)a1;

@end
