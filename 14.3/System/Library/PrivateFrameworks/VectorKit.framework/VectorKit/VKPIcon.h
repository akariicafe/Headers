@class NSString;

@interface VKPIcon : PBCodable <NSCopying> {
    struct { unsigned char matchingStyleAttributeLongValue : 1; unsigned char anchorPointX : 1; unsigned char anchorPointY : 1; unsigned char iconRectHeight : 1; unsigned char iconRectWidth : 1; unsigned char iconRectX : 1; unsigned char iconRectY : 1; unsigned char matchingStyleAttributeKey : 1; unsigned char matchingStyleAttributeValue : 1; unsigned char size : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int atlasIndex;
@property (nonatomic) unsigned int quadIndex;
@property (nonatomic) BOOL hasAnchorPointX;
@property (nonatomic) unsigned int anchorPointX;
@property (nonatomic) BOOL hasAnchorPointY;
@property (nonatomic) unsigned int anchorPointY;
@property (nonatomic) BOOL hasIconRectX;
@property (nonatomic) unsigned int iconRectX;
@property (nonatomic) BOOL hasIconRectY;
@property (nonatomic) unsigned int iconRectY;
@property (nonatomic) BOOL hasIconRectWidth;
@property (nonatomic) unsigned int iconRectWidth;
@property (nonatomic) BOOL hasIconRectHeight;
@property (nonatomic) unsigned int iconRectHeight;
@property (nonatomic) BOOL hasMatchingStyleAttributeKey;
@property (nonatomic) unsigned int matchingStyleAttributeKey;
@property (nonatomic) BOOL hasMatchingStyleAttributeValue;
@property (nonatomic) int matchingStyleAttributeValue;
@property (nonatomic) BOOL hasMatchingStyleAttributeLongValue;
@property (nonatomic) unsigned long long matchingStyleAttributeLongValue;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) int size;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
