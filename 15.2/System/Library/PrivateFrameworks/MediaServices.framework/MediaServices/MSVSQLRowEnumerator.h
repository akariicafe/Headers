@class NSString, MSVSQLStatement;

@interface MSVSQLRowEnumerator : NSEnumerator <NSObject> {
    MSVSQLStatement *_statement;
}

@property (readonly, nonatomic) long long columnCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nextObject;
- (long long)int64ValueAtColumnIndex:(long long)a0;
- (id)objectValueAtColumnIndex:(long long)a0;
- (id)jsonValueAtColumnIndex:(long long)a0 error:(id *)a1;
- (id)dateValueAtColumnIndex:(long long)a0;
- (BOOL)boolValueAtColumnIndex:(long long)a0;
- (id)columnNameAtIndex:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isNullValueAtColumnIndex:(long long)a0;
- (id)dataValueAtColumnIndex:(long long)a0;
- (id)jsonDataAtColumnIndex:(long long)a0;
- (double)doubleValueAtColumnIndex:(long long)a0;
- (unsigned long long)uint64ValueAtColumnIndex:(long long)a0;
- (id)nextObjectWithError:(id *)a0;
- (float)floatValueAtColumnIndex:(long long)a0;
- (id)stringValueAtColumnIndex:(long long)a0;

@end
