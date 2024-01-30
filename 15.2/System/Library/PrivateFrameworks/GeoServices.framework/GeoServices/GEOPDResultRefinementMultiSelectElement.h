@class PBDataReader, NSString, GEOPDResultRefinementMetadata, GEOStyleAttributes, PBUnknownFields;

@interface GEOPDResultRefinementMultiSelectElement : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_displayName;
    GEOPDResultRefinementMetadata *_metadata;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _elementType;
    int _evChargingConnectorType;
    unsigned int _selectionSequenceNumber;
    BOOL _isSelected;
    struct { unsigned char has_elementType : 1; unsigned char has_evChargingConnectorType : 1; unsigned char has_selectionSequenceNumber : 1; unsigned char has_isSelected : 1; unsigned char read_unknownFields : 1; unsigned char read_displayName : 1; unsigned char read_metadata : 1; unsigned char read_styleAttributes : 1; unsigned char wrote_anyField : 1; } _flags;
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
