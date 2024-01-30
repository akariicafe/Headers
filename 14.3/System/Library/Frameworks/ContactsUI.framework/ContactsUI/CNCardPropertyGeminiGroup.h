@interface CNCardPropertyGeminiGroup : CNCardPropertyGroup

@property (nonatomic) BOOL shouldShowGemini;

- (id)editingItems;
- (id)displayItems;
- (id)_loadPropertyItems;
- (void)setGeminiResult:(id)a0;

@end
