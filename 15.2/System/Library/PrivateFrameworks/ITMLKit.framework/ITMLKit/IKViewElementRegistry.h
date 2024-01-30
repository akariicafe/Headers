@class NSMutableDictionary;

@interface IKViewElementRegistry : NSObject {
    NSMutableDictionary *_classMap;
    NSMutableDictionary *_typeMap;
    NSMutableDictionary *_dependentMap;
}

- (void).cxx_destruct;
- (id)init;
- (void)registerClass:(Class)a0 forElementName:(id)a1 elementType:(unsigned long long)a2;
- (Class)elementClassByTagName:(id)a0;
- (void)registerClass:(Class)a0 forElementName:(id)a1 elementType:(unsigned long long)a2 dependent:(BOOL)a3;
- (BOOL)isDependentByTagName:(id)a0;
- (unsigned long long)elementTypeByTagName:(id)a0;

@end
