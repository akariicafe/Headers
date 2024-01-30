@class NSString;

@interface NTPBPersonalizationInstanceHistory : PBCodable <NSCopying> {
    struct { unsigned char lastChangeNumber : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasInstanceIdentifier;
@property (retain, nonatomic) NSString *instanceIdentifier;
@property (nonatomic) BOOL hasLastChangeNumber;
@property (nonatomic) unsigned long long lastChangeNumber;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
