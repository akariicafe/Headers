@class NSData, NPKProtoPassSyncState;

@interface NPKProtoPassSyncReconciledStateUnrecognized : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUnrecognizedReconciledStateHash;
@property (retain, nonatomic) NSData *unrecognizedReconciledStateHash;
@property (readonly, nonatomic) BOOL hasLibraryPassSyncState;
@property (retain, nonatomic) NPKProtoPassSyncState *libraryPassSyncState;

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
