@class NSString, NSMutableArray;

@interface HDCodableNanoSyncStatus : PBCodable <HDSyncAnchorMap, HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying> {
    struct { unsigned char statusCode : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *anchors;

+ (id)statusWithStatusCode:(int)a0;
+ (Class)anchorsType;
+ (id)retreiveFromPersistentUserInfo:(id)a0;
+ (id)persistentUserInfoKey;

- (void)setAnchor:(long long)a0 forSyncEntity:(Class)a1;
- (unsigned long long)anchorCount;
- (BOOL)readFrom:(id)a0;
- (void)enumerateAnchorsAndEntityIdentifiersWithBlock:(id /* block */)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (int)StringAsStatusCode:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (long long)anchorForSyncEntityIdentifier:(id)a0;
- (long long)anchorForSyncEntityClass:(Class)a0;
- (id)statusCodeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (id)nanoSyncDescription;
- (void)clearAnchors;
- (void)addAnchors:(id)a0;
- (unsigned long long)anchorsCount;
- (id)anchorsAtIndex:(unsigned long long)a0;
- (void)addToPersistentUserInfo:(id)a0;
- (id)copyForPersistentUserInfo;

@end
