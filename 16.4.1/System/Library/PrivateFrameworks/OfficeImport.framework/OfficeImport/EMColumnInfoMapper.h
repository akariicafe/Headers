@class EDColumnInfo;

@interface EMColumnInfoMapper : CMMapper {
    EDColumnInfo *edColumnInfo;
    double columnWidth;
    unsigned long long columnSpan;
}

- (double)columnWidth;
- (void).cxx_destruct;
- (id)initWithDefaultWidth:(double)a0 span:(unsigned long long)a1 parent:(id)a2;
- (id)initWithEDColumnInfo:(id)a0 maxSpan:(unsigned long long)a1 parent:(id)a2;
- (void)mapAt:(id)a0 withState:(id)a1;

@end
