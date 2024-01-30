@class NSString;

@interface BMPBAskToBuyEvent : PBCodable <NSCopying> {
    struct { unsigned char eventTime : 1; unsigned char starRating : 1; unsigned char status : 1; unsigned char isActionUserDevice : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (nonatomic) BOOL hasEventTime;
@property (nonatomic) double eventTime;
@property (readonly, nonatomic) BOOL hasUserID;
@property (retain, nonatomic) NSString *userID;
@property (readonly, nonatomic) BOOL hasActionUserID;
@property (retain, nonatomic) NSString *actionUserID;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasItemTitle;
@property (retain, nonatomic) NSString *itemTitle;
@property (readonly, nonatomic) BOOL hasItemDescription;
@property (retain, nonatomic) NSString *itemDescription;
@property (readonly, nonatomic) BOOL hasItemLocalizedPrice;
@property (retain, nonatomic) NSString *itemLocalizedPrice;
@property (readonly, nonatomic) BOOL hasThumbnailPath;
@property (retain, nonatomic) NSString *thumbnailPath;
@property (readonly, nonatomic) BOOL hasAgeRating;
@property (retain, nonatomic) NSString *ageRating;
@property (nonatomic) BOOL hasStarRating;
@property (nonatomic) float starRating;
@property (readonly, nonatomic) BOOL hasProductType;
@property (retain, nonatomic) NSString *productType;
@property (nonatomic) BOOL hasIsActionUserDevice;
@property (nonatomic) BOOL isActionUserDevice;
@property (readonly, nonatomic) BOOL hasStoreLink;
@property (retain, nonatomic) NSString *storeLink;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsStatus:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)statusAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
