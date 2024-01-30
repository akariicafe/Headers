@class UIImage, PKPaymentCredential, PKPaymentPass;

@interface PKPaymentSetupCredentialListItem : PKPaymentSetupListItem <NSCopying>

@property (retain, nonatomic) PKPaymentCredential *credential;
@property (nonatomic) unsigned long long lastCheckedCredentialHash;
@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) UIImage *passSnapshot;
@property (nonatomic) BOOL isUnavailable;
@property (nonatomic) BOOL isRefund;
@property (nonatomic) BOOL isFetchingPassSnapshot;

- (id)initWithCredential:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
