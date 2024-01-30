@class NPKProtoHash, NSMutableArray;

@interface NPKProtoResyncNeededRequest : PBRequest <NSCopying> {
    struct { unsigned char resyncID : 1; unsigned char fullResyncNeeded : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExpectedHash;
@property (retain, nonatomic) NPKProtoHash *expectedHash;
@property (retain, nonatomic) NSMutableArray *uniqueIDs;
@property (retain, nonatomic) NSMutableArray *manifestHashes;
@property (nonatomic) BOOL hasFullResyncNeeded;
@property (nonatomic) BOOL fullResyncNeeded;
@property (nonatomic) BOOL hasResyncID;
@property (nonatomic) unsigned int resyncID;

+ (Class)uniqueIDsType;
+ (Class)manifestHashesType;

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
- (void)addUniqueIDs:(id)a0;
- (void)addManifestHashes:(id)a0;
- (unsigned long long)uniqueIDsCount;
- (void)clearUniqueIDs;
- (id)uniqueIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)manifestHashesCount;
- (void)clearManifestHashes;
- (id)manifestHashesAtIndex:(unsigned long long)a0;

@end
