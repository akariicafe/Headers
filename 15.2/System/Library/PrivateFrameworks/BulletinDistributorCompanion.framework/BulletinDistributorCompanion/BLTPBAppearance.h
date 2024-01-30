@class NSString, BLTPBImage;

@interface BLTPBAppearance : PBCodable <NSCopying> {
    struct { unsigned char destructive : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasImage;
@property (retain, nonatomic) BLTPBImage *image;
@property (nonatomic) BOOL hasDestructive;
@property (nonatomic) BOOL destructive;

- (BOOL)readFrom:(id)a0;
- (id)description;
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
