@class NSString, NPKProtoHash, NPKProtoCatalog;

@interface NPKProtoRemovePassRequest : PBRequest <NSCopying> {
    struct { unsigned char lastKnownResyncID : 1; unsigned char resyncID : 1; unsigned char syncID : 1; } _has;
}

@property (retain, nonatomic) NSString *passID;
@property (readonly, nonatomic) BOOL hasLibraryHash;
@property (retain, nonatomic) NPKProtoHash *libraryHash;
@property (nonatomic) BOOL hasResyncID;
@property (nonatomic) unsigned int resyncID;
@property (readonly, nonatomic) BOOL hasCatalog;
@property (retain, nonatomic) NPKProtoCatalog *catalog;
@property (nonatomic) BOOL hasLastKnownResyncID;
@property (nonatomic) unsigned int lastKnownResyncID;
@property (nonatomic) BOOL hasSyncID;
@property (nonatomic) unsigned int syncID;

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
