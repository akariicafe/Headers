@interface KNTitlePlaceholderInfo : KNPlaceholderInfo

- (int)kind;
- (void)acceptVisitor:(id)a0;
- (id)initWithKNPlaceholderInfo:(id)a0;
- (id)copyToInstantiateMasterPlaceholder;
- (id)defaultBuildChunkTitle;

@end
