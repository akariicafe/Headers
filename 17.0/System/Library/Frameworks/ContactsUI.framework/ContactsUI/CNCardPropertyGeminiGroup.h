@interface CNCardPropertyGeminiGroup : CNCardPropertyGroup

@property (nonatomic) BOOL shouldShowGemini;

- (id)displayItems;
- (id)_loadPropertyItems;
- (id)editingItems;
- (void)setGeminiResult:(id)a0;

@end
