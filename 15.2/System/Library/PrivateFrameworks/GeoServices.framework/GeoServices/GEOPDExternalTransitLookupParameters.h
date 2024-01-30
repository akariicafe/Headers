@class PBDataReader, NSString, GEOLocation, NSMutableArray, PBUnknownFields;

@interface GEOPDExternalTransitLookupParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_externalTransitStationCodes;
    NSString *_sourceId;
    GEOLocation *_transactionLocation;
    double _transactionTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_transactionTimestamp : 1; unsigned char read_unknownFields : 1; unsigned char read_externalTransitStationCodes : 1; unsigned char read_sourceId : 1; unsigned char read_transactionLocation : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
