@class NSData;

@interface NTPBAppleIdSignInResult : PBCodable <NSCopying> {
    struct { unsigned char paidSubscriptionConversionPointType : 1; unsigned char signInResult : 1; } _has;
}

@property (nonatomic) BOOL hasSignInResult;
@property (nonatomic) int signInResult;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointType;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (readonly, nonatomic) BOOL hasSubscriptionPurchaseSessionId;
@property (retain, nonatomic) NSData *subscriptionPurchaseSessionId;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)paidSubscriptionConversionPointTypeAsString:(int)a0;
- (int)StringAsPaidSubscriptionConversionPointType:(id)a0;

@end
