@class PBUnknownFields, NSString, PBDataReader;

@interface GEOPDJoeColor : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_backgroundColor;
    NSString *_primaryTextColor;
    NSString *_quaternaryTextColor;
    NSString *_secondaryTextColor;
    NSString *_tertiaryTextColor;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _curated;
    struct { unsigned char has_curated : 1; unsigned char read_unknownFields : 1; unsigned char read_backgroundColor : 1; unsigned char read_primaryTextColor : 1; unsigned char read_quaternaryTextColor : 1; unsigned char read_secondaryTextColor : 1; unsigned char read_tertiaryTextColor : 1; unsigned char wrote_anyField : 1; } _flags;
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
