@class NSString;

@interface PBBProtoCompanionTermsResponse : PBCodable <NSCopying> {
    struct { unsigned char isExistingAccountTerms : 1; unsigned char termsAccepted : 1; } _has;
}

@property (nonatomic) BOOL hasTermsAccepted;
@property (nonatomic) BOOL termsAccepted;
@property (readonly, nonatomic) BOOL hasUserAgent;
@property (retain, nonatomic) NSString *userAgent;
@property (nonatomic) BOOL hasIsExistingAccountTerms;
@property (nonatomic) BOOL isExistingAccountTerms;
@property (readonly, nonatomic) BOOL hasResponseData;
@property (retain, nonatomic) NSString *responseData;

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

@end
