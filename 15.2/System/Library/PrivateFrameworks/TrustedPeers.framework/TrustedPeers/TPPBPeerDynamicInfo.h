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

+ (Class)includedType;
+ (Class)excludedType;
+ (Class)dispositionsType;
+ (Class)preapprovalsType;

- (void)addIncluded:(id)a0;
- (unsigned long long)preapprovalsCount;
- (id)includedAtIndex:(unsigned long long)a0;
- (void)clearExcludeds;
- (void)clearIncludeds;
- (void)addPreapprovals:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addDispositions:(id)a0;
- (unsigned long long)excludedsCount;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)excludedAtIndex:(unsigned long long)a0;
- (id)preapprovalsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)clearPreapprovals;
- (void)clearDispositions;
- (unsigned long long)hash;
- (void)addExcluded:(id)a0;
- (unsigned long long)dispositionsCount;
- (id)dispositionsAtIndex:(unsigned long long)a0;
- (unsigned long long)includedsCount;
- (id)dictionaryRepresentation;

@end
