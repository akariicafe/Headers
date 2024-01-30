@interface SECSFAActionDropEvent : PBCodable <NSCopying> {
    struct { unsigned char excludeCount : 1; unsigned char excludeEvent : 1; } _has;
}

@property (nonatomic) BOOL hasExcludeEvent;
@property (nonatomic) BOOL excludeEvent;
@property (nonatomic) BOOL hasExcludeCount;
@property (nonatomic) BOOL excludeCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
