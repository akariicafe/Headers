@class NSString;

@interface SGM2ContactCreated : PBCodable <NSCopying> {
    struct { unsigned char app : 1; unsigned char wasSuggestedContact : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasWasSuggestedContact;
@property (nonatomic) BOOL wasSuggestedContact;
@property (nonatomic) BOOL hasApp;
@property (nonatomic) int app;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)appAsString:(int)a0;
- (int)StringAsApp:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
