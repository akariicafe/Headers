@class PBUnknownFields;

@interface GEOFormattedStringMetaData : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _realtimeStatus;
    int _spokenPrivacyFilterType;
    struct { unsigned char has_realtimeStatus : 1; unsigned char has_spokenPrivacyFilterType : 1; } _flags;
}

@property (nonatomic) BOOL hasRealtimeStatus;
@property (nonatomic) int realtimeStatus;
@property (nonatomic) BOOL hasSpokenPrivacyFilterType;
@property (nonatomic) int spokenPrivacyFilterType;
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
- (int)StringAsRealtimeStatus:(id)a0;
- (int)StringAsSpokenPrivacyFilterType:(id)a0;
- (id)realtimeStatusAsString:(int)a0;
- (id)spokenPrivacyFilterTypeAsString:(int)a0;

@end
