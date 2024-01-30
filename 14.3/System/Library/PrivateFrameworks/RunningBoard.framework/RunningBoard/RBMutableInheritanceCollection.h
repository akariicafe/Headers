@class NSCountedSet;

@interface RBMutableInheritanceCollection : RBInheritanceCollection {
    NSCountedSet *_countedNamespaces;
}

+ (id)collectionWithInheritances:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allNamespaces;
- (id)_initWithCollection:(id)a0;
- (void)addInheritance:(id)a0;
- (void)unionCollection:(id)a0;
- (void)removeInheritance:(id)a0;

@end
