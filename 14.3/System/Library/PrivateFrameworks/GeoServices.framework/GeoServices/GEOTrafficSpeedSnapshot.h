@class PBDataReader, GEOTrafficSnapshotMetaData, NSMutableArray;

@interface GEOTrafficSpeedSnapshot : PBCodable <NSCopying> {
    PBDataReader *_reader;
    unsigned long long _receivedTime;
    GEOTrafficSnapshotMetaData *_snapshotMetaData;
    NSMutableArray *_speeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_receivedTime : 1; unsigned char read_snapshotMetaData : 1; unsigned char read_speeds : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSnapshotMetaData;
@property (retain, nonatomic) GEOTrafficSnapshotMetaData *snapshotMetaData;
@property (retain, nonatomic) NSMutableArray *speeds;
@property (nonatomic) BOOL hasReceivedTime;
@property (nonatomic) unsigned long long receivedTime;

+ (Class)speedsType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)speedsCount;
- (void)clearSpeeds;
- (id)speedsAtIndex:(unsigned long long)a0;
- (void)addSpeeds:(id)a0;

@end
