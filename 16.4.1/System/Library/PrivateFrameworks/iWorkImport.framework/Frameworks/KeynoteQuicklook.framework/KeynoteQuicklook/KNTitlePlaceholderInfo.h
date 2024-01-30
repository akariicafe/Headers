@interface KNTitlePlaceholderInfo : KNPlaceholderInfo

+ (id)mixableObjectClasses;

- (void)acceptVisitor:(id)a0;
- (id)typeName;
- (int)kind;
- (id)copyToInstantiateMasterPlaceholder;
- (id)defaultBuildChunkTitle;
- (id)initWithKNPlaceholderInfo:(id)a0;

@end
