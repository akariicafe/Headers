@class NSString;

@interface CertInfoBasicTrustDescription : NSObject <CertInfoTrustDescription> {
    struct __SecTrust { } *_trust;
    int _action;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)summaryTitle;
- (id)_expirationDate;
- (void)dealloc;
- (id)initWithTrust:(struct __SecTrust { } *)a0 action:(int)a1;
- (BOOL)isTrusted;
- (unsigned long long)certificateCount;
- (id)certificatePropertiesAtIndex:(unsigned long long)a0;
- (id)summarySubtitle;
- (id)summaryDescriptionItems;
- (id)certificateSubjectSummaryAtIndex:(unsigned long long)a0;
- (id)certificateIssuerSummaryAtIndex:(unsigned long long)a0;
- (id)certificateExpirationDateAtIndex:(unsigned long long)a0;
- (BOOL)isRootCertificate;

@end
