@class NSMutableArray, PBDataReader;

@interface GEOLogMsgStateDetailLookAroundLog : PBCodable <NSCopying> {
    PBDataReader *_reader;
    double _durationSec;
    NSMutableArray *_lookAroundPipRecords;
    NSMutableArray *_lookAroundViewRecords;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _poisShown;
    struct { unsigned char has_durationSec : 1; unsigned char has_poisShown : 1; unsigned char read_lookAroundPipRecords : 1; unsigned char read_lookAroundViewRecords : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasDurationSec;
@property (nonatomic) double durationSec;
@property (nonatomic) BOOL hasPoisShown;
@property (nonatomic) unsigned int poisShown;
@property (retain, nonatomic) NSMutableArray *lookAroundPipRecords;
@property (retain, nonatomic) NSMutableArray *lookAroundViewRecords;

+ (Class)lookAroundPipRecordsType;
+ (Class)lookAroundViewRecordsType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (void)addLookAroundPipRecords:(id)a0;
- (void)addLookAroundViewRecords:(id)a0;
- (unsigned long long)lookAroundPipRecordsCount;
- (void)clearLookAroundPipRecords;
- (id)lookAroundPipRecordsAtIndex:(unsigned long long)a0;
- (unsigned long long)lookAroundViewRecordsCount;
- (void)clearLookAroundViewRecords;
- (id)lookAroundViewRecordsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
