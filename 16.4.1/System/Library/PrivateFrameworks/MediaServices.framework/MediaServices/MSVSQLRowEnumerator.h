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
- (id)markdownTableRow;
- (id)stringValueAtColumnIndex:(long long)a0;
- (id)markdownTableHeader;
- (id)jsonValueAtColumnIndex:(long long)a0 error:(id *)a1;
- (unsigned long long)uint64ValueAtColumnIndex:(long long)a0;
- (double)doubleValueAtColumnIndex:(long long)a0;
- (id)jsonDataAtColumnIndex:(long long)a0;
- (id)nextObjectWithError:(id *)a0;
- (id)_markdownTable;
- (id)markdownTable;
- (id)dataValueAtColumnIndex:(long long)a0;
- (id)dateValueAtColumnIndex:(long long)a0;
- (BOOL)isNullValueAtColumnIndex:(long long)a0;
- (BOOL)boolValueAtColumnIndex:(long long)a0;
- (id)columnNameAtIndex:(long long)a0;
- (id)objectValueAtColumnIndex:(long long)a0;
- (void).cxx_destruct;
- (float)floatValueAtColumnIndex:(long long)a0;
- (long long)int64ValueAtColumnIndex:(long long)a0;
- (void)_addRow:(id)a0 toTable:(id)a1;

@end
