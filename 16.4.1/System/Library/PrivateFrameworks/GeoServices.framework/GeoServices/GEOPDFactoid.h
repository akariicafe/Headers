@class PBDataReader, NSString, GEOPDMapsIdentifier, NSMutableArray, PBUnknownFields;

@interface GEOPDFactoid : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_icon;
    double _number;
    GEOPDMapsIdentifier *_placeId;
    NSMutableArray *_placeNames;
    NSString *_text;
    NSString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _entryType;
    int _unit;
    BOOL _canBeDisplayedInPlaceSummary;
    struct { unsigned char has_number : 1; unsigned char has_entryType : 1; unsigned char has_unit : 1; unsigned char has_canBeDisplayedInPlaceSummary : 1; unsigned char read_unknownFields : 1; unsigned char read_icon : 1; unsigned char read_placeId : 1; unsigned char read_placeNames : 1; unsigned char read_text : 1; unsigned char read_title : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (BOOL)factoidPairAvailableForPlaceData:(id)a0;
+ (id)factoidsForPlaceData:(id)a0;

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
- (id)bestLocalizedPlaceName;

@end
