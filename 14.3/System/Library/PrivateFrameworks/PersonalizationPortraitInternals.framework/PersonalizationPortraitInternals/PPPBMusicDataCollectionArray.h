@class NSString, NSMutableArray;

@interface PPPBMusicDataCollectionArray : PBCodable <NSCopying> {
    struct { unsigned char hasMusicSubscription : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *records;
@property (nonatomic) BOOL hasHasMusicSubscription;
@property (nonatomic) BOOL hasMusicSubscription;
@property (retain, nonatomic) NSMutableArray *experimentalGroups;
@property (readonly, nonatomic) BOOL hasAssetVersion;
@property (retain, nonatomic) NSString *assetVersion;

+ (Class)recordsType;
+ (Class)experimentalGroupsType;

- (void)addRecords:(id)a0;
- (id)recordsAtIndex:(unsigned long long)a0;
- (void)clearRecords;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)recordsCount;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearExperimentalGroups;
- (void)addExperimentalGroups:(id)a0;
- (unsigned long long)experimentalGroupsCount;
- (id)experimentalGroupsAtIndex:(unsigned long long)a0;

@end
