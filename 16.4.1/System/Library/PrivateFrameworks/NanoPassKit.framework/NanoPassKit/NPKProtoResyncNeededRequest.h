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

+ (Class)manifestHashesType;
+ (Class)uniqueIDsType;

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
- (void)addManifestHashes:(id)a0;
- (void)addUniqueIDs:(id)a0;
- (void)clearManifestHashes;
- (void)clearUniqueIDs;
- (id)manifestHashesAtIndex:(unsigned long long)a0;
- (unsigned long long)manifestHashesCount;
- (id)uniqueIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)uniqueIDsCount;

@end
