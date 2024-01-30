@class NSMutableArray;

@interface GEOPlaceSearchFeedbackCollection : PBCodable <NSCopying> {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionID;
    NSMutableArray *_actionCaptures;
    unsigned long long _businessID;
    long long _placeID;
    int _localSearchProviderID;
    struct { unsigned char has_sessionID : 1; unsigned char has_businessID : 1; unsigned char has_placeID : 1; unsigned char has_localSearchProviderID : 1; } _flags;
}

@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionID;
@property (nonatomic) BOOL hasBusinessID;
@property (nonatomic) unsigned long long businessID;
@property (nonatomic) BOOL hasPlaceID;
@property (nonatomic) long long placeID;
@property (retain, nonatomic) NSMutableArray *actionCaptures;
@property (nonatomic) BOOL hasLocalSearchProviderID;
@property (nonatomic) int localSearchProviderID;

+ (Class)actionCaptureType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
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
- (void)addActionCapture:(id)a0;
- (unsigned long long)actionCapturesCount;
- (void)clearActionCaptures;
- (id)actionCaptureAtIndex:(unsigned long long)a0;

@end
