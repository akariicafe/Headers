@class NSString, NSMutableArray;

@interface CAXPBPredictionContext : PBCodable <NSCopying>

@property (nonatomic) double suggestionDate;
@property (readonly, nonatomic) BOOL hasSourceAppName;
@property (retain, nonatomic) NSString *sourceAppName;
@property (retain, nonatomic) NSMutableArray *contents;
@property (retain, nonatomic) NSMutableArray *previousActions;
@property (readonly, nonatomic) BOOL hasSearchTerm;
@property (retain, nonatomic) NSString *searchTerm;

+ (Class)contentsType;
+ (Class)previousActionsType;

- (unsigned long long)contentsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addContents:(id)a0;
- (id)contentsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)clearContents;
- (id)dictionaryRepresentation;
- (void)addPreviousActions:(id)a0;
- (unsigned long long)previousActionsCount;
- (void)clearPreviousActions;
- (id)previousActionsAtIndex:(unsigned long long)a0;

@end
