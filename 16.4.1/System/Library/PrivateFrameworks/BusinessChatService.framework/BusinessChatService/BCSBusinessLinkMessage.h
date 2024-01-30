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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)actionAsString:(int)a0;
- (int)StringAsAction:(id)a0;
- (id)categoryStyleAttributesAtIndex:(unsigned long long)a0;
- (void)addBusinessLinkContents:(id)a0;
- (void)addCategoryStyleAttributes:(id)a0;
- (id)businessLinkContentsAtIndex:(unsigned long long)a0;
- (unsigned long long)businessLinkContentsCount;
- (unsigned long long)categoryStyleAttributesCount;
- (void)clearBusinessLinkContents;
- (void)clearCategoryStyleAttributes;

@end
