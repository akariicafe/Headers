@class NSString;

@interface SGM2ContactInBanner : PBCodable <NSCopying> {
    struct { unsigned char app : 1; unsigned char extracted : 1; unsigned char extractionModelVersion : 1; unsigned char type : 1; unsigned char selfId : 1; } _has;
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

- (int)StringAsType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)extractedAsString:(int)a0;
- (int)StringAsExtracted:(id)a0;
- (id)appAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (int)StringAsApp:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)typeAsString:(int)a0;

@end
