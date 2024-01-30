@class NSString;

@interface NPKProtoPeerPaymentRegistrationRequest : PBRequest <NSCopying> {
    struct { unsigned char forceReRegistration : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasServiceURL;
@property (retain, nonatomic) NSString *serviceURL;
@property (nonatomic) BOOL hasForceReRegistration;
@property (nonatomic) BOOL forceReRegistration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
