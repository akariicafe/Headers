@interface CNCardPropertyGeminiGroup : CNCardPropertyGroup

@property (nonatomic) BOOL shouldShowGemini;

- (id)displayItems;
- (id)_loadPropertyItems;
- (void)setGeminiResult:(id)a0;
- (id)editingItems;

@end
