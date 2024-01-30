@class NSString, NSMutableArray, NSData;

@interface HMPBActionSet : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *actions;
@property (readonly, nonatomic) BOOL hasActionSetType;
@property (retain, nonatomic) NSString *actionSetType;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (readonly, nonatomic) BOOL hasHomeUUID;
@property (retain, nonatomic) NSData *homeUUID;

+ (Class)actionsType;

- (void)clearActions;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)actionsCount;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)actionsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)addActions:(id)a0;
- (id)dictionaryRepresentation;

@end
