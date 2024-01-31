@interface NSSQLLimitIntermediate : NSSQLIntermediate {
    unsigned long long _limit;
}

- (id)generateSQLStringInContext:(id)a0;
- (id)initWithLimit:(unsigned long long)a0 inScope:(id)a1;

@end
