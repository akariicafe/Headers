@interface PDChartBuild : PDBuild {
    int mChartBuildType;
}

- (void)setType:(int)a0;
- (unsigned long long)hash;
- (int)type;
- (BOOL)isEqual:(id)a0;
- (id)initWithBuildType:(int)a0;

@end
