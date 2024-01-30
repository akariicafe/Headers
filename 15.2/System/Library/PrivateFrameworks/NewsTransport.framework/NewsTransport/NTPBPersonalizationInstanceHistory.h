@class NSString;

@interface NTPBPersonalizationInstanceHistory : PBCodable <NSCopying> {
    struct { unsigned char lastChangeNumber : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasInstanceIdentifier;
@property (retain, nonatomic) NSString *instanceIdentifier;
@property (nonatomic) BOOL hasLastChangeNumber;
@property (nonatomic) unsigned long long lastChangeNumber;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
