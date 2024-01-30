@class GEORPFeedbackAddressFields, PBUnknownFields;

@interface GEORPGroundViewCorrections : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEORPFeedbackAddressFields *_addressToCensor;
    int _correctionType;
    struct { unsigned char has_correctionType : 1; } _flags;
}

@property (nonatomic) BOOL hasCorrectionType;
@property (nonatomic) int correctionType;
@property (readonly, nonatomic) BOOL hasAddressToCensor;
@property (retain, nonatomic) GEORPFeedbackAddressFields *addressToCensor;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (int)StringAsCorrectionType:(id)a0;
- (id)correctionTypeAsString:(int)a0;

@end
