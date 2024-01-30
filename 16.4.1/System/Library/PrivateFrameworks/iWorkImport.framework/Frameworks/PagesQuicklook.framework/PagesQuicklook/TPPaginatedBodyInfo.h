@interface TPPaginatedBodyInfo : TPBodyInfo

- (Class)layoutClass;
- (BOOL)laysOutVertically;
- (id)pageInfo;
- (id)nextTargetFirstChildHint;
- (id)nextTargetFirstColumn;
- (id)previousTargetLastColumn;
- (Class)repClass;
- (id)nextTargetTopicNumberHints;
- (void)inflateBodyLayout:(id)a0;
- (long long)modelRootIndex;
- (id)pageHint;

@end
