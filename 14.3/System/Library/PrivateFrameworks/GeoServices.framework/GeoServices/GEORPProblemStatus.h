@class GEORPNotification, NSString, GEORPResolution, PBDataReader, GEORPDetails;

@interface GEORPProblemStatus : PBCodable <NSCopying> {
    PBDataReader *_reader;
    double _creationDate;
    GEORPDetails *_details;
    GEORPNotification *_notification;
    NSString *_problemId;
    GEORPResolution *_problemResolution;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _problemState;
    struct { unsigned char has_creationDate : 1; unsigned char has_problemState : 1; unsigned char read_details : 1; unsigned char read_notification : 1; unsigned char read_problemId : 1; unsigned char read_problemResolution : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasProblemId;
@property (retain, nonatomic) NSString *problemId;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) BOOL hasProblemState;
@property (nonatomic) int problemState;
@property (readonly, nonatomic) BOOL hasProblemResolution;
@property (retain, nonatomic) GEORPResolution *problemResolution;
@property (readonly, nonatomic) BOOL hasNotification;
@property (retain, nonatomic) GEORPNotification *notification;
@property (readonly, nonatomic) BOOL hasDetails;
@property (retain, nonatomic) GEORPDetails *details;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (id)problemStateAsString:(int)a0;
- (int)StringAsProblemState:(id)a0;
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
