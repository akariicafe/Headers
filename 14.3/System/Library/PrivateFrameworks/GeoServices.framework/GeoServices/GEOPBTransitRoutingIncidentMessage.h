@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitRoutingIncidentMessage : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _transitIncidentIndexs;
    NSString *_routingMessage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _routingIncidentMessageIndex;
    struct { unsigned char has_routingIncidentMessageIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_transitIncidentIndexs : 1; unsigned char read_routingMessage : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasRoutingIncidentMessageIndex;
@property (nonatomic) unsigned int routingIncidentMessageIndex;
@property (readonly, nonatomic) BOOL hasRoutingMessage;
@property (retain, nonatomic) NSString *routingMessage;
@property (readonly, nonatomic) unsigned long long transitIncidentIndexsCount;
@property (readonly, nonatomic) unsigned int *transitIncidentIndexs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)addTransitIncidentIndex:(unsigned int)a0;
- (void)clearTransitIncidentIndexs;
- (unsigned int)transitIncidentIndexAtIndex:(unsigned long long)a0;
- (void)setTransitIncidentIndexs:(unsigned int *)a0 count:(unsigned long long)a1;

@end
