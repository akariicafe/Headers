@class NSString, NSMutableArray, PBDataReader;

@interface GEOTFTrafficSnapshot : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_compactSpeeds;
    NSString *_feedId;
    unsigned long long _feedPublishTime;
    long long _feedUpdateTime;
    NSMutableArray *_incidents;
    NSMutableArray *_regions;
    NSString *_snapshotId;
    NSMutableArray *_speeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _trafficVersion;
    struct { unsigned char has_feedPublishTime : 1; unsigned char has_feedUpdateTime : 1; unsigned char has_trafficVersion : 1; unsigned char read_compactSpeeds : 1; unsigned char read_feedId : 1; unsigned char read_incidents : 1; unsigned char read_regions : 1; unsigned char read_snapshotId : 1; unsigned char read_speeds : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *regions;
@property (retain, nonatomic) NSMutableArray *incidents;
@property (retain, nonatomic) NSMutableArray *speeds;
@property (nonatomic) BOOL hasFeedUpdateTime;
@property (nonatomic) long long feedUpdateTime;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) BOOL hasTrafficVersion;
@property (nonatomic) unsigned int trafficVersion;
@property (nonatomic) BOOL hasFeedPublishTime;
@property (nonatomic) unsigned long long feedPublishTime;
@property (retain, nonatomic) NSMutableArray *compactSpeeds;
@property (readonly, nonatomic) BOOL hasSnapshotId;
@property (retain, nonatomic) NSString *snapshotId;

+ (Class)incidentsType;
+ (Class)compactSpeedsType;
+ (BOOL)isValid:(id)a0;
+ (Class)regionType;
+ (Class)speedsType;

- (void)readAll:(BOOL)a0;
- (void)addIncidents:(id)a0;
- (unsigned long long)speedsCount;
- (void)addCompactSpeeds:(id)a0;
- (unsigned long long)incidentsCount;
- (void)clearIncidents;
- (id)incidentsAtIndex:(unsigned long long)a0;
- (id)speedsAtIndex:(unsigned long long)a0;
- (unsigned long long)compactSpeedsCount;
- (void)clearCompactSpeeds;
- (id)compactSpeedsAtIndex:(unsigned long long)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)regionsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearRegions;
- (void)addRegion:(id)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)addSpeeds:(id)a0;
- (id)regionAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)clearSpeeds;
- (id)dictionaryRepresentation;

@end
