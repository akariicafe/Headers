@interface NSSQLOffsetIntermediate : NSSQLIntermediate {
    unsigned long long _offset;
}

- (id)initWithOffset:(unsigned long long)a0 inScope:(id)a1;
- (id)generateSQLStringInContext:(id)a0;

@end
