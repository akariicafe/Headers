@class NSURLProtectionSpace, NSURLCredential;

@interface WBSCredentialMatch : WBSFormAutoFillItem

@property (readonly, nonatomic) NSURLCredential *credential;
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace;

- (id)initWithCredential:(id)a0;
- (id)completion;
- (void).cxx_destruct;
- (id)initWithCredential:(id)a0 protectionSpace:(id)a1;

@end
