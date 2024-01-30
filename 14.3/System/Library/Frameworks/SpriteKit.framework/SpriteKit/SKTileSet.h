@class NSArray, NSString, SKTileGroup, NSMutableArray;

@interface SKTileSet : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_definitions;
    NSMutableArray *_groups;
    NSArray *_stamps;
    unsigned long long _type;
    struct CGSize { double width; double height; } _defaultTileSize;
    SKTileGroup *_defaultTileGroup;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *tileDefinitions;
@property (retain, nonatomic) NSArray *stamps;
@property (copy, nonatomic) NSArray *tileGroups;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) SKTileGroup *defaultTileGroup;
@property (nonatomic) struct CGSize { double x0; double x1; } defaultTileSize;

+ (id)recursivePathsForResourcesOfType:(id)a0 inDirectory:(id)a1;
+ (id)findTileSetInBundleNamed:(id)a0;
+ (id)tileSetWithTileGroups:(id)a0;
+ (id)tileSetWithTileGroups:(id)a0 tileSetType:(unsigned long long)a1;
+ (id)tileSetNamed:(id)a0;
+ (id)tileSetFromURL:(id)a0;
+ (void)clearTileSetTableCache;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)commonInit;
- (void)dealloc;
- (BOOL)isEqualToNode:(id)a0;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)encodeWithCoder:(id)a0;
- (void)unobserveAllTileDefinitions;
- (void)lookForMissingDefinitionsInGroups;
- (void)updateTileDefinitionIDsInGroupRules;
- (void)setGroupParentPointers;
- (void)observeTileDefinition:(id)a0;
- (void)removeTileDefinitionObservers:(id)a0;
- (void)calcDefaultTileSize;
- (id)initWithTileGroups:(id)a0;
- (id)initWithTileGroups:(id)a0 tileSetType:(unsigned long long)a1;
- (void)observeAllTileDefinitions;
- (id)findTileDefinitionForGroup:(id)a0 withGroupAdjacency:(unsigned long long *)a1;
- (id)findTileDefinitionsForGroup:(id)a0 withGroupAdjacency:(unsigned long long *)a1;
- (id)getCenterTileDefinitionForGroup:(id)a0 withRequiredOutputGroupAdjacency:(unsigned long long *)a1;

@end
