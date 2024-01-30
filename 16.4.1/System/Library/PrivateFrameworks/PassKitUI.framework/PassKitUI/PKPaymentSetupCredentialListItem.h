@class UIImage, PKPaymentCredential, NSString;

@interface PKPaymentSetupCredentialListItem : PKPaymentSetupListItem <NSCopying, PKPassSnapshotCoordinatableSource>

@property (readonly, nonatomic) PKPaymentCredential *credential;
@property (nonatomic) unsigned long long lastCheckedCredentialHash;
@property (retain, nonatomic) UIImage *passSnapshot;
@property (nonatomic) BOOL isUnavailable;
@property (nonatomic) BOOL isRefund;
@property (nonatomic) BOOL isSnapshotFetchInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCredential:(id)a0;

@end
