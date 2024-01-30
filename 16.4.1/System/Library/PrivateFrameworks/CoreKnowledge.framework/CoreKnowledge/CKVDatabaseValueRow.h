@class NSArray;

@interface CKVDatabaseValueRow : NSObject {
    NSArray *_databaseValueArray;
}

- (id)initWithDatabaseValueArray:(id)a0;
- (id)stringValueAtColumnIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (id)numberValueAtColumnIndex:(unsigned long long)a0;
- (id)dataValueAtColumnIndex:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
