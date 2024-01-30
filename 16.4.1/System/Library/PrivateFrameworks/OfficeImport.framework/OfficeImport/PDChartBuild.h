@interface PDChartBuild : PDBuild {
    int mChartBuildType;
}

- (int)type;
- (BOOL)isEqual:(id)a0;
- (void)setType:(int)a0;
- (unsigned long long)hash;
- (id)initWithBuildType:(int)a0;

@end
