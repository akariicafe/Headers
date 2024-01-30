@class NSData, NSString;

@interface NSSLegalDocumentsRespMsg : PBCodable <NSCopying> {
    struct { unsigned char sarUrlAdded : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLicense;
@property (retain, nonatomic) NSData *license;
@property (readonly, nonatomic) BOOL hasSarStatement;
@property (retain, nonatomic) NSData *sarStatement;
@property (readonly, nonatomic) BOOL hasLegalNotices;
@property (retain, nonatomic) NSData *legalNotices;
@property (readonly, nonatomic) BOOL hasBuildVersion;
@property (retain, nonatomic) NSString *buildVersion;
@property (nonatomic) BOOL hasSarUrlAdded;
@property (nonatomic) BOOL sarUrlAdded;
@property (readonly, nonatomic) BOOL hasBuiltinApps;
@property (retain, nonatomic) NSData *builtinApps;

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
