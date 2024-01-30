@interface KNBodyPlaceholderInfo : KNPlaceholderInfo

- (id)typeName;
- (int)kind;
- (void)acceptVisitor:(id)a0;
- (id)initWithKNPlaceholderInfo:(id)a0;
- (id)copyToInstantiateMasterPlaceholder;

@end
