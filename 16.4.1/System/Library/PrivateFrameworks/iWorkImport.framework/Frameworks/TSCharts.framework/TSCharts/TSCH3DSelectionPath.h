@interface TSCH3DSelectionPath : TSCHSelectionPath

@property (readonly, nonatomic) Class sceneObjectClass;
@property (readonly, nonatomic) unsigned long long styleIndex;

+ (id)selectionPathWithClass:(Class)a0 styleIndex:(unsigned long long)a1 selectionPath:(id)a2;
+ (id)selectionPathWithClass:(Class)a0 styleIndex:(unsigned long long)a1 type:(id)a2 name:(id)a3 arguments:(id)a4;

- (id)initWithClass:(Class)a0 styleIndex:(unsigned long long)a1 type:(id)a2 name:(id)a3 arguments:(id)a4;

@end
