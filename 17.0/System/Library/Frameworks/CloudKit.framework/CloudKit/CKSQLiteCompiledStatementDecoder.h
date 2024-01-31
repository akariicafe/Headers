@class CKSQLiteCompiledStatement, NSMutableDictionary;

@interface CKSQLiteCompiledStatementDecoder : NSCoder {
    CKSQLiteCompiledStatement *_statement;
    NSMutableDictionary *_propertyValues;
}

- (BOOL)containsValueForKey:(id)a0;
- (float)decodeFloatForKey:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (double)decodeDoubleForKey:(id)a0;
- (BOOL)ck_isDecodingForCKSQLiteDatabase;
- (void).cxx_destruct;
- (id)decodeObjectForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (id)initWithStatement:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (id)fillProperties;

@end
