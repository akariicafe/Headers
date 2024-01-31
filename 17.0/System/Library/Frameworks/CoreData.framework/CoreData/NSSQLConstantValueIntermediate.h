@interface NSSQLConstantValueIntermediate : NSSQLIntermediate {
    unsigned char _type;
    id _constantValue;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (id)initWithConstantValue:(id)a0 inScope:(id)a1 context:(id)a2;
- (id)initWithConstantValue:(id)a0 ofType:(unsigned char)a1 inScope:(id)a2 context:(id)a3;

@end
