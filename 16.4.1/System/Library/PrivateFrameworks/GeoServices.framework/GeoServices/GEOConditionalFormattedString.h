@class GEOCondition, NSString, PBDataReader, GEOFormattedString, PBUnknownFields;
@protocol GEOServerFormattedString, GEOServerCondition;

@interface GEOConditionalFormattedString : PBCodable <GEOServerConditionalString, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOCondition *_condition;
    GEOFormattedString *_formattedString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_condition : 1; unsigned char read_formattedString : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) id<GEOServerFormattedString> formattedString;
@property (readonly, nonatomic) id<GEOServerCondition> condition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasFormattedString;
@property (retain, nonatomic) GEOFormattedString *formattedString;
@property (readonly, nonatomic) BOOL hasCondition;
@property (retain, nonatomic) GEOCondition *condition;
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

@end
