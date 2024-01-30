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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
