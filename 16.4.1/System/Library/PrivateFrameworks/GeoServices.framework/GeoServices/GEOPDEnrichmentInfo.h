@class PBUnknownFields, NSString, PBDataReader;

@interface GEOPDEnrichmentInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_showcaseId;
    NSString *_sourceId;
    NSString *_sourceName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_showcaseId : 1; unsigned char read_sourceId : 1; unsigned char read_sourceName : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)enrichmentInfoWithPlaceData:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
