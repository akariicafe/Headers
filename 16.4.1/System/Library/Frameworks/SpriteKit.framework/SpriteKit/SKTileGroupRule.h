@class NSArray, NSString, SKTileGroup, NSMutableArray;

@interface SKTileGroupRule : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_tileDefinitions;
    NSMutableArray *_tileDefinitionIDs;
    unsigned char _adjacency;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *tileDefinitionIDs;
@property (weak, nonatomic) SKTileGroup *parentGroup;
@property (nonatomic) unsigned long long adjacency;
@property (copy, nonatomic) NSArray *tileDefinitions;
@property (copy, nonatomic) NSString *name;

+ (id)tileGroupRuleWithAdjacency:(unsigned long long)a0 tileDefinitions:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (void).cxx_destruct;
- (BOOL)isEqualToNode:(id)a0;
- (void)setTileDefinitionParentPointers;
- (void)calcTileDefinitionIDsWithTileSet:(id)a0;
- (id)initWithAdjacency:(unsigned long long)a0 tileDefinitions:(id)a1;
- (void)setTileDefinitionIDs:(id)a0;
- (void)setTileDefinitionsFromIDsWithTileSet:(id)a0;

@end
