@class NSString;

@interface SGM2ContactRejected : PBCodable <NSCopying> {
    struct { unsigned char app : 1; unsigned char extracted : 1; unsigned char extractionModelVersion : 1; unsigned char type : 1; unsigned char uiType : 1; unsigned char selfId : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasApp;
@property (nonatomic) int app;
@property (nonatomic) BOOL hasExtracted;
@property (nonatomic) int extracted;
@property (nonatomic) BOOL hasSelfId;
@property (nonatomic) BOOL selfId;
@property (nonatomic) BOOL hasExtractionModelVersion;
@property (nonatomic) unsigned int extractionModelVersion;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasUiType;
@property (nonatomic) int uiType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)appAsString:(int)a0;
- (int)StringAsApp:(id)a0;
- (id)extractedAsString:(int)a0;
- (int)StringAsExtracted:(id)a0;
- (id)uiTypeAsString:(int)a0;
- (int)StringAsUiType:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
