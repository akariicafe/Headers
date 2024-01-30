@class NSMutableArray, NSMutableDictionary;

@interface SUObjectPool : NSObject {
    NSMutableDictionary *_poolObjects;
}

@property (readonly, nonatomic) NSMutableArray *vendedObjects;

- (void)dealloc;
- (id)copyPoppedObjectForClass:(Class)a0;
- (id)addObjectsOfClass:(Class)a0 count:(long long)a1 forClass:(Class)a2;
- (void)addObjects:(id)a0 forClass:(Class)a1;

@end
