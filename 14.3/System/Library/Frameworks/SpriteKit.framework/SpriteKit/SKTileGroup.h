@class SKTileSet, NSArray, NSString, NSMutableArray;

@interface SKTileGroup : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_rules;
    unsigned long long _type;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) SKTileSet *parentSet;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *rules;
@property (copy, nonatomic) NSString *name;

+ (id)emptyTileGroup;
+ (id)tileGroupWithRules:(id)a0;
+ (id)tileGroupWithTileDefinition:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToNode:(id)a0;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setRuleParentPointers;
- (id)initWithTileDefinition:(id)a0;
- (id)initWithRules:(id)a0;
- (unsigned long long)findTileDefinitionIndexForAdjacencyData:(unsigned long long)a0 tileSetType:(unsigned long long)a1;
- (id)findTileDefinitionIDsForAdjacencyData:(unsigned long long)a0 tileSetType:(unsigned long long)a1;

@end
