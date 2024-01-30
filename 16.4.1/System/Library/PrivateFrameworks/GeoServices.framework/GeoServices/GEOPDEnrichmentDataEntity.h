@class PBDataReader, GEOPDEnrichmentInfo, NSString, NSData, NSMutableArray, PBUnknownFields;

@interface GEOPDEnrichmentDataEntity : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_adamIds;
    GEOPDEnrichmentInfo *_enrichmentInfo;
    NSData *_enrichmentMetadata;
    NSString *_html;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _suppressionReason;
    struct { unsigned char has_suppressionReason : 1; unsigned char read_unknownFields : 1; unsigned char read_adamIds : 1; unsigned char read_enrichmentInfo : 1; unsigned char read_enrichmentMetadata : 1; unsigned char read_html : 1; unsigned char wrote_anyField : 1; } _flags;
}

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
