@class PBDataReader, NSString, GEOPDMediaLinkPositionMetaData, NSMutableArray, PBUnknownFields;

@interface GEOPDMediaLink : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_adamId;
    GEOPDMediaLinkPositionMetaData *_mediaLinkPositionMetaData;
    NSString *_subId;
    NSMutableArray *_thirdPartyLinks;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _mediaSubType;
    int _mediaType;
    struct { unsigned char has_mediaSubType : 1; unsigned char has_mediaType : 1; unsigned char read_unknownFields : 1; unsigned char read_adamId : 1; unsigned char read_mediaLinkPositionMetaData : 1; unsigned char read_subId : 1; unsigned char read_thirdPartyLinks : 1; unsigned char wrote_anyField : 1; } _flags;
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
