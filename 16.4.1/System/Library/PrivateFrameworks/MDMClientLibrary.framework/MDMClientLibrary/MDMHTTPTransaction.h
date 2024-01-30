@interface MDMHTTPTransaction : DMCHTTPTransaction

@property (readonly, nonatomic) BOOL isCheckIn;

+ (id)reauthRequiredMAIDError;
+ (id)reauthRequiredThirdPartyError;
+ (id)unauthorizedByServerError;

- (id)initWithURL:(id)a0 data:(id)a1 identity:(struct __SecIdentity { } *)a2 pinnedCertificates:(id)a3 pinningRevocationCheckRequired:(BOOL)a4 signMessage:(BOOL)a5 isCheckin:(BOOL)a6 isShortTransaction:(BOOL)a7 rmAccountID:(id)a8;
- (id)initWithURL:(id)a0 identity:(struct __SecIdentity { } *)a1 pinnedCertificates:(id)a2 pinningRevocationCheckRequired:(BOOL)a3 isShortTransaction:(BOOL)a4 rmAccountID:(id)a5;

@end
