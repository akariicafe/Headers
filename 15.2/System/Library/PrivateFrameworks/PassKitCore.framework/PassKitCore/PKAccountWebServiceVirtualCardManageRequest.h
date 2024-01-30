@class NSString, NSURL, PKAccountVirtualCardEncryptionFields;

@interface PKAccountWebServiceVirtualCardManageRequest : PKAccountWebServiceRequest <NSSecureCoding> {
    PKAccountVirtualCardEncryptionFields *_encryptionFields;
    long long _action;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *virtualCardIdentifier;


- (void)setAction:(long long)a0 withQueue:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
