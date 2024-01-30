@class NSString, NSMutableArray;

@interface PKProtobufPaymentTokenConfiguration : PBCodable <NSCopying> {
    struct { unsigned char requestMerchantToken : 1; } _has;
}

@property (nonatomic) BOOL hasRequestMerchantToken;
@property (nonatomic) BOOL requestMerchantToken;
@property (readonly, nonatomic) BOOL hasMerchantTokenNotificationURL;
@property (retain, nonatomic) NSString *merchantTokenNotificationURL;
@property (retain, nonatomic) NSMutableArray *multiTokenContexts;
@property (readonly, nonatomic) BOOL hasMerchantTokenManagementURL;
@property (retain, nonatomic) NSString *merchantTokenManagementURL;

+ (Class)multiTokenContextsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addMultiTokenContexts:(id)a0;
- (unsigned long long)multiTokenContextsCount;
- (void)clearMultiTokenContexts;
- (id)multiTokenContextsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
