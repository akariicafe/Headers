@class NSString;

@interface NTPBPurchaseOfferableConfiguration : PBCodable <NSCopying> {
    struct { unsigned char allowsPublisherPadApp : 1; unsigned char allowsPublisherPhoneApp : 1; unsigned char allowsPublisherWebSite : 1; unsigned char preferredOffer : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPurchaseId;
@property (retain, nonatomic) NSString *purchaseId;
@property (nonatomic) BOOL hasAllowsPublisherPhoneApp;
@property (nonatomic) BOOL allowsPublisherPhoneApp;
@property (nonatomic) BOOL hasAllowsPublisherPadApp;
@property (nonatomic) BOOL allowsPublisherPadApp;
@property (nonatomic) BOOL hasAllowsPublisherWebSite;
@property (nonatomic) BOOL allowsPublisherWebSite;
@property (nonatomic) BOOL hasPreferredOffer;
@property (nonatomic) BOOL preferredOffer;

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
