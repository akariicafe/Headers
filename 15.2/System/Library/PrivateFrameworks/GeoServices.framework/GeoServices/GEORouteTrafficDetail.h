@class NSString, PBDataReader, PBUnknownFields;

@interface GEORouteTrafficDetail : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_spokenRouteName;
    NSString *_unabbreviatedRouteName;
    NSString *_writtenRouteName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _routeTrafficCondition;
    struct { unsigned char has_routeTrafficCondition : 1; unsigned char read_unknownFields : 1; unsigned char read_spokenRouteName : 1; unsigned char read_unabbreviatedRouteName : 1; unsigned char read_writtenRouteName : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasRouteTrafficCondition;
@property (nonatomic) int routeTrafficCondition;
@property (readonly, nonatomic) BOOL hasWrittenRouteName;
@property (retain, nonatomic) NSString *writtenRouteName;
@property (readonly, nonatomic) BOOL hasSpokenRouteName;
@property (retain, nonatomic) NSString *spokenRouteName;
@property (readonly, nonatomic) BOOL hasUnabbreviatedRouteName;
@property (retain, nonatomic) NSString *unabbreviatedRouteName;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)routeTrafficConditionAsString:(int)a0;
- (int)StringAsRouteTrafficCondition:(id)a0;
- (id)dictionaryRepresentation;

@end
