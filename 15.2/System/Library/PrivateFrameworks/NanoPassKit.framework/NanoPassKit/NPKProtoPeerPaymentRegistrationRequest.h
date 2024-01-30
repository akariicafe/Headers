@class NSString;

@interface NPKProtoPeerPaymentRegistrationRequest : PBRequest <NSCopying> {
    struct { unsigned char forceReRegistration : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasServiceURL;
@property (retain, nonatomic) NSString *serviceURL;
@property (nonatomic) BOOL hasForceReRegistration;
@property (nonatomic) BOOL forceReRegistration;

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

@end
