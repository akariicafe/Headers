@class ACAccount, AAGrandSlamSigner;

@interface AAFamilyRequest : AARequest {
    ACAccount *_appleAccount;
    AAGrandSlamSigner *_grandSlamSigner;
    AAGrandSlamSigner *_familyGrandSlamSigner;
}

@property (readonly, nonatomic) BOOL isUserInitiated;

- (id)_familyGrandSlamSigner;
- (id)initWithAppleAccount:(id)a0 grandSlamAccount:(id)a1 accountStore:(id)a2;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithGrandSlamAccount:(id)a0 accountStore:(id)a1;
- (id)initWithGrandSlamSigner:(id)a0;

@end
