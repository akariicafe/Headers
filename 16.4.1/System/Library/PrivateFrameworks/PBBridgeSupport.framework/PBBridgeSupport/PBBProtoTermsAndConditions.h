@class NSData, NSString;

@interface PBBProtoTermsAndConditions : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLicense;
@property (retain, nonatomic) NSData *license;
@property (readonly, nonatomic) BOOL hasMultiterms;
@property (retain, nonatomic) NSData *multiterms;
@property (readonly, nonatomic) BOOL hasWarranty;
@property (retain, nonatomic) NSData *warranty;
@property (readonly, nonatomic) BOOL hasLicenseLabel;
@property (retain, nonatomic) NSString *licenseLabel;
@property (readonly, nonatomic) BOOL hasWarrantyLabel;
@property (retain, nonatomic) NSString *warrantyLabel;
@property (readonly, nonatomic) BOOL hasAgreeDialogTitle;
@property (retain, nonatomic) NSString *agreeDialogTitle;
@property (readonly, nonatomic) BOOL hasAgreeDialogText;
@property (retain, nonatomic) NSString *agreeDialogText;
@property (readonly, nonatomic) BOOL hasAgreeLabel;
@property (retain, nonatomic) NSString *agreeLabel;
@property (readonly, nonatomic) BOOL hasCancelLabel;
@property (retain, nonatomic) NSString *cancelLabel;
@property (readonly, nonatomic) BOOL hasDisagreeLabel;
@property (retain, nonatomic) NSString *disagreeLabel;
@property (readonly, nonatomic) BOOL hasServerTerms;
@property (retain, nonatomic) NSData *serverTerms;
@property (readonly, nonatomic) BOOL hasUserAgent;
@property (retain, nonatomic) NSString *userAgent;

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
