@class NSMutableDictionary;

@interface NURenderTagGroup : NSObject {
    NSMutableDictionary *_tags;
    NSMutableDictionary *_children;
}

@property (weak) NURenderTagGroup *parent;

+ (BOOL)validatePath:(id)a0 error:(out id *)a1;

- (id)_root;
- (id)children;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)path;
- (id)childWithName:(id)a0;
- (void)addChild:(id)a0 withName:(id)a1;
- (void)removeChildWithName:(id)a0;
- (id)leafName;
- (void)_composePathComponents:(id)a0;
- (id)addTag:(id)a0 forNode:(id)a1;
- (id)_nodeWithPathComponents:(id)a0 atIndex:(unsigned long long)a1;
- (id)nodeWithPath:(id)a0;
- (id)_descriptionWithLevel:(long long)a0;
- (void)visitEveryTagWithBlock:(id /* block */)a0;
- (id)finalizeMap:(id)a0;

@end
