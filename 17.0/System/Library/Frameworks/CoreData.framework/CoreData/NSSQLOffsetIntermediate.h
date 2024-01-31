@interface NSSQLOffsetIntermediate : NSSQLIntermediate {
    unsigned long long _offset;
}

- (id)generateSQLStringInContext:(id)a0;
- (id)initWithOffset:(unsigned long long)a0 inScope:(id)a1;

@end
