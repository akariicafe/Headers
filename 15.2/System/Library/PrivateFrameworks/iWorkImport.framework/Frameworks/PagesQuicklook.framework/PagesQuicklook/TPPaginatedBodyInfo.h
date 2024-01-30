@interface TPPaginatedBodyInfo : TPBodyInfo

- (id)pageInfo;
- (Class)repClass;
- (BOOL)laysOutVertically;
- (Class)layoutClass;
- (id)previousTargetLastColumn;
- (id)nextTargetFirstColumn;
- (id)nextTargetFirstChildHint;
- (long long)modelRootIndex;
- (id)nextTargetTopicNumberHints;
- (id)pageHint;
- (void)inflateBodyLayout:(id)a0;

@end
