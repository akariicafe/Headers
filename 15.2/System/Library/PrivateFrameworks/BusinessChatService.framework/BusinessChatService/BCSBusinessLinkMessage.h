@class NSString, NSMutableArray;

@interface BCSBusinessLinkMessage : PBCodable <NSCopying> {
    struct { unsigned char action : 1; unsigned char isPoweredBy : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLink;
@property (retain, nonatomic) NSString *link;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasHeroImage;
@property (retain, nonatomic) NSString *heroImage;
@property (readonly, nonatomic) BOOL hasIconImage;
@property (retain, nonatomic) NSString *iconImage;
@property (readonly, nonatomic) BOOL hasRedirectUrl;
@property (retain, nonatomic) NSString *redirectUrl;
@property (retain, nonatomic) NSMutableArray *businessLinkContents;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) int action;
@property (nonatomic) BOOL hasIsPoweredBy;
@property (nonatomic) BOOL isPoweredBy;
@property (readonly, nonatomic) BOOL hasMuid;
@property (retain, nonatomic) NSString *muid;
@property (retain, nonatomic) NSMutableArray *categoryStyleAttributes;

+ (Class)businessLinkContentsType;
+ (Class)categoryStyleAttributesType;

- (id)actionAsString:(int)a0;
- (int)StringAsAction:(id)a0;
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
- (void)addBusinessLinkContents:(id)a0;
- (void)addCategoryStyleAttributes:(id)a0;
- (unsigned long long)businessLinkContentsCount;
- (void)clearBusinessLinkContents;
- (id)businessLinkContentsAtIndex:(unsigned long long)a0;
- (unsigned long long)categoryStyleAttributesCount;
- (void)clearCategoryStyleAttributes;
- (id)categoryStyleAttributesAtIndex:(unsigned long long)a0;

@end
