@class NSString;

@interface NTPBEmailSubscriptionRequest : PBRequest <NSCopying> {
    struct { unsigned char dsId : 1; } _has;
}

@property (nonatomic) BOOL hasDsId;
@property (nonatomic) long long dsId;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (retain, nonatomic) NSString *userStorefrontId;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
