@class NSString, NSArray, NSPredicate, CKSQLiteDatabase, NSMutableDictionary, NSDictionary, NSMutableString, NSMutableArray, CKSQLiteCompiledStatementDecoder, NSPointerArray, NSNumber, CKSQLiteTable;

@interface CKSQLiteCompiledStatement : NSObject {
    CKSQLiteDatabase *_db;
    struct sqlite3_stmt { } *_handle;
    NSString *_sql;
    NSArray *_resultColumns;
    NSArray *_resultColumnTypes;
    NSPointerArray *_fetchedValues;
    NSPredicate *_wherePredicate;
    Class _tableClass;
    NSMutableDictionary *_bindingTypesByVariable;
    NSDictionary *_searchValues;
    BOOL _needsSearchBinding;
    BOOL _sqlLoggingEnabled;
    NSMutableString *_orderBySQL;
    NSMutableArray *_boundObjects;
    CKSQLiteCompiledStatementDecoder *_decoder;
}

@property (readonly, weak, nonatomic) CKSQLiteTable *table;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL shouldCache;
@property (retain, nonatomic) NSArray *searchProperties;
@property (retain, nonatomic) NSNumber *limit;
@property (retain, nonatomic) NSNumber *offset;

+ (id)statementForFetchingAllTableNamesInDatabase:(id)a0;
+ (id)_statementForFetchingMinMax:(id)a0 forColumn:(id)a1 inTable:(id)a2;
+ (id)statementForFetchingColumns:(id)a0 inTable:(id)a1;
+ (id)statementForUpdatingColumns:(id)a0 inTable:(id)a1;
+ (id)statementForCountingRowsInTable:(id)a0;
+ (id)statementForInserting:(id)a0 orUpdating:(id)a1 inTable:(id)a2;
+ (id)statementForSizingColumn:(id)a0 inTable:(id)a1;
+ (id)statementForFetchingMinimumValueForColumn:(id)a0 inTable:(id)a1;
+ (id)statementForDeletingInTable:(id)a0;
+ (id)statementForFetchingMaximumValueForColumn:(id)a0 inTable:(id)a1;
+ (id)statementForInserting:(id)a0 inTable:(id)a1;
+ (id)statementForSummingColumn:(id)a0 inTable:(id)a1;

- (id)propertyDecoder:(id *)a0;
- (id)searchBindingsDescription;
- (void)dealloc;
- (id)initWithTable:(id)a0 sql:(id)a1 resultColumns:(id)a2 resultColumnTypes:(id)a3;
- (id)compile;
- (id)bindValueColumn:(id)a0 type:(unsigned int)a1 value:(id)a2;
- (void)invalidate;
- (id)fetchedColumns;
- (id)cksqlcs_appendSQLConstantValueToString:(id)a0;
- (void)orderByProperty:(id)a0 ascending:(BOOL)a1;
- (void)enumerateResultColumnsWithBlock:(id /* block */)a0;
- (id)description;
- (id)doSearchValueBinding;
- (id)bindValue:(id)a0 ofType:(unsigned int)a1 atIndex:(int)a2;
- (id)addBindingVariable:(id)a0 withAssociatedProperty:(id)a1;
- (id)initWithDatabase:(id)a0 sql:(id)a1 resultColumns:(id)a2 resultColumnTypes:(id)a3;
- (id)bindSearchValues:(id)a0;
- (void).cxx_destruct;
- (id)setSearchPredicate:(id)a0 forProperties:(id)a1 tableClass:(Class)a2;
- (id)_fillFetchedValues;
- (id)sqlValueForVariable:(id)a0;
- (void)resetAndClearBindings;
- (id)boundObjects;
- (BOOL)step:(id *)a0;

@end
