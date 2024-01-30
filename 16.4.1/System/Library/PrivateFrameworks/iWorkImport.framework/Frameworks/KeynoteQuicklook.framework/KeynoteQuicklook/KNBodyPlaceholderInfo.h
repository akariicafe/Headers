@interface KNBodyPlaceholderInfo : KNPlaceholderInfo

+ (id)mixableObjectClasses;

- (void)acceptVisitor:(id)a0;
- (id)typeName;
- (int)kind;
- (id)copyToInstantiateMasterPlaceholder;
- (id)initWithKNPlaceholderInfo:(id)a0;

@end
