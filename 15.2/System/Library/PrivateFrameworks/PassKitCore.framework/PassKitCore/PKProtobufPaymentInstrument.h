@class NSString, NSData, NSMutableArray, PKProtobufCustomPrecisionAmount;

@interface PKProtobufPaymentInstrument : PBCodable <NSCopying> {
    struct { unsigned char ingestedDate : 1; unsigned char peerPaymentAccountBalance : 1; unsigned char peerPaymentAccountState : 1; unsigned char hasAssociatedPeerPaymentAccount : 1; unsigned char supportsAutomaticSelection : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasPassID;
@property (retain, nonatomic) NSString *passID;
@property (retain, nonatomic) NSMutableArray *paymentApplications;
@property (nonatomic) BOOL hasIngestedDate;
@property (nonatomic) double ingestedDate;
@property (readonly, nonatomic) BOOL hasPrimaryAccountNumberSuffix;
@property (retain, nonatomic) NSString *primaryAccountNumberSuffix;
@property (readonly, nonatomic) BOOL hasManifestHash;
@property (retain, nonatomic) NSData *manifestHash;
@property (readonly, nonatomic) BOOL hasPrimaryAccountIdentifier;
@property (retain, nonatomic) NSString *primaryAccountIdentifier;
@property (retain, nonatomic) NSMutableArray *associatedWebDomains;
@property (nonatomic) BOOL hasSupportsAutomaticSelection;
@property (nonatomic) BOOL supportsAutomaticSelection;
@property (readonly, nonatomic) BOOL hasIssuerCountryCode;
@property (retain, nonatomic) NSString *issuerCountryCode;
@property (nonatomic) BOOL hasHasAssociatedPeerPaymentAccount;
@property (nonatomic) BOOL hasAssociatedPeerPaymentAccount;
@property (readonly, nonatomic) BOOL hasPeerPaymentAccountCurrency;
@property (retain, nonatomic) NSString *peerPaymentAccountCurrency;
@property (nonatomic) BOOL hasPeerPaymentAccountBalance;
@property (nonatomic) long long peerPaymentAccountBalance;
@property (nonatomic) BOOL hasPeerPaymentAccountState;
@property (nonatomic) unsigned int peerPaymentAccountState;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (retain, nonatomic) NSString *organizationName;
@property (readonly, nonatomic) BOOL hasCustomPrecisionPeerPaymentAccountBalance;
@property (retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionPeerPaymentAccountBalance;

+ (Class)paymentApplicationsType;
+ (Class)associatedWebDomainsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addAssociatedWebDomains:(id)a0;
- (unsigned long long)paymentApplicationsCount;
- (void)clearPaymentApplications;
- (id)paymentApplicationsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)associatedWebDomainsCount;
- (void)clearAssociatedWebDomains;
- (id)associatedWebDomainsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addPaymentApplications:(id)a0;

@end
