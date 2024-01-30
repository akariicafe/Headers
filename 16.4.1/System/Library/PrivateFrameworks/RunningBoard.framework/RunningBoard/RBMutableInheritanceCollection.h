@class NSCountedSet;

@interface RBMutableInheritanceCollection : RBInheritanceCollection {
    NSCountedSet *_countedNamespaces;
}

+ (id)collectionWithInheritances:(id)a0;

- (id)_initWithCollection:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)unionCollection:(id)a0;
- (id)allNamespaces;
- (void)removeInheritance:(id)a0;
- (void)addInheritance:(id)a0;
- (void).cxx_destruct;

@end
