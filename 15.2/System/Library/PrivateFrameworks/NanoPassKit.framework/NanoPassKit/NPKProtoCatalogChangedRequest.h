@class NPKProtoCatalog;

@interface NPKProtoCatalogChangedRequest : PBRequest <NSCopying> {
    struct { unsigned char lastKnownResyncID : 1; unsigned char resyncID : 1; unsigned char syncID : 1; } _has;
}

@property (retain, nonatomic) NPKProtoCatalog *companionCatalog;
@property (nonatomic) BOOL hasResyncID;
@property (nonatomic) unsigned int resyncID;
@property (nonatomic) BOOL hasLastKnownResyncID;
@property (nonatomic) unsigned int lastKnownResyncID;
@property (nonatomic) BOOL hasSyncID;
@property (nonatomic) unsigned int syncID;
@property (readonly, nonatomic) BOOL hasWatchCatalog;
@property (retain, nonatomic) NPKProtoCatalog *watchCatalog;

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

@end
