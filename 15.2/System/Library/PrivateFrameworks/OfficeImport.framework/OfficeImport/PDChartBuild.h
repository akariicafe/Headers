@interface PDChartBuild : PDBuild {
    int mChartBuildType;
}

- (BOOL)isEqual:(id)a0;
- (int)type;
- (unsigned long long)hash;
- (void)setType:(int)a0;
- (id)initWithBuildType:(int)a0;

@end
