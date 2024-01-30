@class NSString, NSData, NSMutableArray;

@interface NPKProtoPassSyncStateItem : PBCodable <NSCopying> {
    struct { unsigned char sequenceCounter : 1; } _has;
}

@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSString *serialNumber;
@property (nonatomic) BOOL hasSequenceCounter;
@property (nonatomic) unsigned int sequenceCounter;
@property (retain, nonatomic) NSData *manifestHash;
@property (retain, nonatomic) NSMutableArray *manifestEntrys;

+ (Class)manifestEntryType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addManifestEntry:(id)a0;
- (unsigned long long)manifestEntrysCount;
- (void)clearManifestEntrys;
- (id)manifestEntryAtIndex:(unsigned long long)a0;

@end
