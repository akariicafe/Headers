@class NSString;

@interface _AWDWiFiUIScanCount : PBCodable <NSCopying> {
    struct { unsigned char max : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSection;
@property (retain, nonatomic) NSString *section;
@property (nonatomic) BOOL hasMax;
@property (nonatomic) unsigned int max;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
