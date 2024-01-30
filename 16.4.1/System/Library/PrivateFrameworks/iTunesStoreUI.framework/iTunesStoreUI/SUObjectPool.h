@class NSMutableArray, NSMutableDictionary;

@interface SUObjectPool : NSObject {
    NSMutableDictionary *_poolObjects;
}

@property (readonly, nonatomic) NSMutableArray *vendedObjects;

- (void)dealloc;
- (void)addObjects:(id)a0 forClass:(Class)a1;
- (id)addObjectsOfClass:(Class)a0 count:(long long)a1 forClass:(Class)a2;
- (id)copyPoppedObjectForClass:(Class)a0;

@end
