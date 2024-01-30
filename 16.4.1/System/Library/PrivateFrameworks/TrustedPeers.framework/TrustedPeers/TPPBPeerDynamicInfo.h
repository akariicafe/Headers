@class NSMutableArray;

@interface TPPBPeerDynamicInfo : PBCodable <NSCopying> {
    struct { unsigned char clock : 1; } _has;
}

@property (nonatomic) BOOL hasClock;
@property (nonatomic) unsigned long long clock;
@property (retain, nonatomic) NSMutableArray *includeds;
@property (retain, nonatomic) NSMutableArray *excludeds;
@property (retain, nonatomic) NSMutableArray *dispositions;
@property (retain, nonatomic) NSMutableArray *preapprovals;

+ (Class)dispositionsType;
+ (Class)excludedType;
+ (Class)includedType;
+ (Class)preapprovalsType;

- (id)dispositionsAtIndex:(unsigned long long)a0;
- (void)addIncluded:(id)a0;
- (void)addPreapprovals:(id)a0;
- (unsigned long long)dispositionsCount;
- (void)clearPreapprovals;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)preapprovalsAtIndex:(unsigned long long)a0;
- (void)clearExcludeds;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)excludedAtIndex:(unsigned long long)a0;
- (id)includedAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)includedsCount;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)excludedsCount;
- (void)addDispositions:(id)a0;
- (void)clearDispositions;
- (id)description;
- (void)clearIncludeds;
- (void)addExcluded:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)preapprovalsCount;

@end
