@class NSString, PBDataReader;

@interface GEOMapsLaunchFeedbackCollection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionId;
    NSString *_sourceAppBundleId;
    NSString *_uriScheme;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_sessionId : 1; unsigned char read_sourceAppBundleId : 1; unsigned char read_uriScheme : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionId;
@property (readonly, nonatomic) BOOL hasSourceAppBundleId;
@property (retain, nonatomic) NSString *sourceAppBundleId;
@property (readonly, nonatomic) BOOL hasUriScheme;
@property (retain, nonatomic) NSString *uriScheme;

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

@end
