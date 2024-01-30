@class NSString, AAInheritanceController, CIImage;
@protocol AAInheritanceContactInfo;

@interface AAInheritanceContactController : NSObject {
    long long _contactType;
    AAInheritanceController *_inheritanceController;
    id<AAInheritanceContactInfo> _contactInfo;
    CIImage *_accessKeyQRCodeImage;
}

@property (readonly, nonatomic) NSString *claimTokenString;
@property (readonly, nonatomic) NSString *accessKeyString;

- (id)_accessKeyQRCodeImage;
- (id)initWithContactInfo:(id)a0 contactType:(long long)a1;
- (id)accessKeyQRCodeImageDataWithSize:(double)a0;
- (void)removeContactAsBeneficiaryWithCompletion:(id /* block */)a0;
- (void)removeContactAsBenefactorWithCompletion:(id /* block */)a0;
- (void)sendInvitationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
