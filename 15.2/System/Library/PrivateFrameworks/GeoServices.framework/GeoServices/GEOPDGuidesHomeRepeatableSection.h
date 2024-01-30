@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDGuidesHomeRepeatableSection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_carouselGuideIds;
    NSMutableArray *_guidesLocationEntrys;
    NSString *_name;
    NSMutableArray *_publisherIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _contentType;
    int _sectionType;
    struct { unsigned char has_contentType : 1; unsigned char has_sectionType : 1; unsigned char read_unknownFields : 1; unsigned char read_carouselGuideIds : 1; unsigned char read_guidesLocationEntrys : 1; unsigned char read_name : 1; unsigned char read_publisherIds : 1; unsigned char wrote_anyField : 1; } _flags;
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
