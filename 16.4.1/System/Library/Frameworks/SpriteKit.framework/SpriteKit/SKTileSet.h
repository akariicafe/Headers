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

+ (id)tileSetFromURL:(id)a0;
+ (void)clearTileSetTableCache;
+ (id)findTileSetInBundleNamed:(id)a0;
+ (id)recursivePathsForResourcesOfType:(id)a0 inDirectory:(id)a1;
+ (id)tileSetNamed:(id)a0;
+ (id)tileSetWithTileGroups:(id)a0;
+ (id)tileSetWithTileGroups:(id)a0 tileSetType:(unsigned long long)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)copy;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToNode:(id)a0;
- (id)initWithTileGroups:(id)a0 tileSetType:(unsigned long long)a1;
- (void)calcDefaultTileSize;
- (id)findTileDefinitionForGroup:(id)a0 withGroupAdjacency:(unsigned long long *)a1;
- (id)findTileDefinitionsForGroup:(id)a0 withGroupAdjacency:(unsigned long long *)a1;
- (id)getCenterTileDefinitionForGroup:(id)a0 withRequiredOutputGroupAdjacency:(unsigned long long *)a1;
- (id)initWithTileGroups:(id)a0;
- (void)lookForMissingDefinitionsInGroups;
- (void)observeAllTileDefinitions;
- (void)observeTileDefinition:(id)a0;
- (void)removeTileDefinitionObservers:(id)a0;
- (void)setGroupParentPointers;
- (void)unobserveAllTileDefinitions;
- (void)updateTileDefinitionIDsInGroupRules;

@end
