@interface AWDSafariTappedAutoFillQuickTypeSuggestionEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char category : 1; unsigned char formProperty : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) int category;
@property (nonatomic) BOOL hasFormProperty;
@property (nonatomic) int formProperty;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)categoryAsString:(int)a0;
- (int)StringAsCategory:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)formPropertyAsString:(int)a0;
- (int)StringAsFormProperty:(id)a0;

@end
