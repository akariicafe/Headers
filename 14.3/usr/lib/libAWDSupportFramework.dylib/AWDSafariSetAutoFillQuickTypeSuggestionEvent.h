@interface AWDSafariSetAutoFillQuickTypeSuggestionEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char category : 1; unsigned char formProperty : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) int category;
@property (nonatomic) BOOL hasFormProperty;
@property (nonatomic) int formProperty;

- (id)formPropertyAsString:(int)a0;
- (int)StringAsFormProperty:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)categoryAsString:(int)a0;
- (int)StringAsCategory:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
