@interface CNCardPropertyAddressingGrammarGroup : CNCardPropertyGroup

@property (readonly, nonatomic) BOOL shouldShowLanguageLabel;

- (BOOL)canAddEditingItem;
- (id)newEditingItemWithValue:(id)a0;
- (Class)propertyGroupItemClass;
- (void)saveChanges;
- (BOOL)shouldKeepNoiseValue;

@end
