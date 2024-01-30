@class NSString, NSMutableArray, CLPLocation;

@interface CLPPassLocation : PBCodable <NSCopying> {
    struct { unsigned char age : 1; unsigned char serverHash : 1; } _has;
}

@property (retain, nonatomic) NSString *passTypeId;
@property (retain, nonatomic) NSMutableArray *associatedStoreIds;
@property (nonatomic) int passSource;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) double age;
@property (retain, nonatomic) CLPLocation *location;
@property (nonatomic) BOOL hasServerHash;
@property (nonatomic) int serverHash;

+ (Class)associatedStoreIdType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addAssociatedStoreId:(id)a0;
- (unsigned long long)associatedStoreIdsCount;
- (void)clearAssociatedStoreIds;
- (id)associatedStoreIdAtIndex:(unsigned long long)a0;

@end
