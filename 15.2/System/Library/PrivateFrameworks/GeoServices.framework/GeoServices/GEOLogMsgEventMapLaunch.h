@class NSString, GEOTimeToLeaveMapLaunch, PBDataReader;

@interface GEOLogMsgEventMapLaunch : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_launchUri;
    NSString *_sourceAppId;
    GEOTimeToLeaveMapLaunch *_timeToLeave;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_launchUri : 1; unsigned char read_sourceAppId : 1; unsigned char read_timeToLeave : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSourceAppId;
@property (retain, nonatomic) NSString *sourceAppId;
@property (readonly, nonatomic) BOOL hasLaunchUri;
@property (retain, nonatomic) NSString *launchUri;
@property (readonly, nonatomic) BOOL hasTimeToLeave;
@property (retain, nonatomic) GEOTimeToLeaveMapLaunch *timeToLeave;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
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
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
