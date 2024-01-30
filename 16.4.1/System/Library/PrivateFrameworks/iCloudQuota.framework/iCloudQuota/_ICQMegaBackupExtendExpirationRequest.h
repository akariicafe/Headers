@class NSString, ACAccount, NSDate;

@interface _ICQMegaBackupExtendExpirationRequest : _ICQMegaBackupNetworkRequest

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, copy, nonatomic) NSString *deviceBackupUUID;
@property (readonly, copy, nonatomic) NSDate *requestedExpirationDate;
@property (readonly, nonatomic, getter=isExtensionAllowed) BOOL extensionAllowed;
@property (readonly, nonatomic) NSDate *updatedExpirationDate;

+ (id)extendExpirationRequestWithAccount:(id)a0 deviceBackupUUID:(id)a1 requestedExpirationDate:(id)a2 requestURL:(id)a3 URLSession:(id)a4 queue:(id)a5 error:(id *)a6;

- (void).cxx_destruct;
- (id)additionalRequestHeaders;
- (id)bodyJSON;
- (id)handleResponse:(id)a0 body:(id)a1;
- (void)addAdditionalRequestHeaders:(id)a0;

@end
