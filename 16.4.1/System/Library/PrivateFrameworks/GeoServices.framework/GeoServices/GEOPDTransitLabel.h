@class GEOPBTransitArtwork, NSString, PBDataReader, PBUnknownFields;
@protocol GEOTransitArtworkDataSource;

@interface GEOPDTransitLabel : PBCodable <GEOTransitLabelItem, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_labelArtwork;
    NSString *_labelTextString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _labelType;
    struct { unsigned char has_labelType : 1; unsigned char read_unknownFields : 1; unsigned char read_labelArtwork : 1; unsigned char read_labelTextString : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *labelString;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> labelArtwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasLabelType;
@property (nonatomic) int labelType;
@property (readonly, nonatomic) BOOL hasLabelTextString;
@property (retain, nonatomic) NSString *labelTextString;
@property (readonly, nonatomic) BOOL hasLabelArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *labelArtwork;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (int)StringAsLabelType:(id)a0;
- (id)labelTypeAsString:(int)a0;

@end
