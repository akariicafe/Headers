@class NSArray, NSString, NSMapTable;
@protocol MDLTransformComponent, MDLObjectContainerComponent;

@interface MDLObject : NSObject <MDLNamed> {
    MDLObject *_parent;
    NSMapTable *_components;
}

@property (readonly, copy, nonatomic) NSArray *components;
@property (weak, nonatomic) MDLObject *parent;
@property (retain, nonatomic) MDLObject *instance;
@property (readonly, nonatomic) NSString *path;
@property (retain, nonatomic) id<MDLTransformComponent> transform;
@property (retain, nonatomic) id<MDLObjectContainerComponent> children;
@property (nonatomic) BOOL hidden;
@property (copy, nonatomic) NSString *name;

- (id)recursiveDescription;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)description;
- (void)addChild:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (struct { })boundingBoxAtTime:(double)a0;
- (void)setComponent:(id)a0 forProtocol:(id)a1;
- (id)componentConformingToProtocol:(id)a0;
- (void)enumerateChildObjectsOfClass:(Class)a0 root:(id)a1 usingBlock:(id /* block */)a2 stopPointer:(BOOL *)a3;
- (id)objectAtPath:(id)a0;

@end
