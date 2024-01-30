@class NSMutableArray, NSMutableDictionary;
@protocol GKSceneRootNodeType;

@interface GKScene : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *entities;
@property (retain, nonatomic) id<GKSceneRootNodeType> rootNode;
@property (readonly, nonatomic) NSMutableDictionary *graphs;

+ (id)_sceneWithFileNamed:(id)a0 rootNode:(id)a1;
+ (id)sceneWithFileNamed:(id)a0 rootNode:(id)a1;
+ (id)sceneWithFileNamed:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (void)addEntity:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)removeEntity:(id)a0;
- (void)addGraph:(id)a0 name:(id)a1;
- (void)removeGraph:(id)a0;

@end
