@class NSSet;

@interface KNCanvasSelection : TSDCanvasSelection

@property (retain, nonatomic) NSSet *buildChunks;
@property (readonly, nonatomic) NSSet *unlockedDrawableInfos;
@property (readonly, nonatomic) NSSet *drawableInfos;
@property (readonly, nonatomic) NSSet *unlockedInfosSupportingHyperlinkActions;
@property (readonly, nonatomic) BOOL containsOnlyUnlockedInfosSupportingHyperlinkActions;

+ (Class)archivedSelectionClass;
+ (id)emptySelection;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)subclassDescription;
- (id)initWithInfos:(id)a0;
- (id)UUIDDescription;
- (id)initWithPersistableInfos:(id)a0 drawableToActionGhostIndexPromiseMap:(id)a1 buildChunks:(id)a2;
- (id)initWithInfos:(id)a0 buildChunks:(id)a1;
- (id)p_drawablesWithoutPromisesInDrawableToActionGhostIndexPromiseMap:(id)a0;
- (id)copyExcludingBuildChunks:(id)a0;
- (id)copyReplacingChunksWithChunks:(id)a0;
- (BOOL)containsBuildChunksOfAnimationType:(long long)a0;

@end
