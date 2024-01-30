@class NSArray;

@interface CKVDatabaseValueRow : NSObject {
    NSArray *_databaseValueArray;
}

- (void).cxx_destruct;
- (id)init;
- (id)dataValueAtColumnIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (id)stringValueAtColumnIndex:(unsigned long long)a0;
- (id)initWithDatabaseValueArray:(id)a0;
- (id)numberValueAtColumnIndex:(unsigned long long)a0;

@end
