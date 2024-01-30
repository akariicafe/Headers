@interface NSSQLConstantValueIntermediate : NSSQLIntermediate {
    unsigned char _type;
    id _constantValue;
}

- (id)propertyAtEndOfKeyPathExpression:(id)a0;
- (unsigned char)sqlTypeForProperty:(id)a0;
- (BOOL)_addBindVarForConstId:(id)a0 ofType:(unsigned char)a1 inContext:(id)a2;
- (id)initWithConstantValue:(id)a0 inScope:(id)a1 context:(id)a2;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (BOOL)_addBindVarForConstVal1:(id)a0 inContext:(id)a1;
- (id)initWithConstantValue:(id)a0 ofType:(unsigned char)a1 inScope:(id)a2 context:(id)a3;

@end
