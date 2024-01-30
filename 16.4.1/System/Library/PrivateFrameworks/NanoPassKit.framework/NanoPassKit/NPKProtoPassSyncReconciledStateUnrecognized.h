@class NSData, NPKProtoPassSyncState;

@interface NPKProtoPassSyncReconciledStateUnrecognized : PBCodable <NSCopying> {
    struct { unsigned char unrecognizedReconciledStateVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUnrecognizedReconciledStateHash;
@property (retain, nonatomic) NSData *unrecognizedReconciledStateHash;
@property (readonly, nonatomic) BOOL hasLibraryPassSyncState;
@property (retain, nonatomic) NPKProtoPassSyncState *libraryPassSyncState;
@property (nonatomic) BOOL hasUnrecognizedReconciledStateVersion;
@property (nonatomic) unsigned int unrecognizedReconciledStateVersion;

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
