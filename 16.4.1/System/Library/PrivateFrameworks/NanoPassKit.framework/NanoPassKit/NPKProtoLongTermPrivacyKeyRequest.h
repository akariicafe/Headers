@class NSString;

@interface NPKProtoLongTermPrivacyKeyRequest : PBRequest <NSCopying> {
    struct { unsigned char reuseExisting : 1; } _has;
}

@property (retain, nonatomic) NSString *credentialGroupIdentifier;
@property (nonatomic) BOOL hasReuseExisting;
@property (nonatomic) BOOL reuseExisting;

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
