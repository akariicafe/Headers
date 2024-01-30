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

- (void).cxx_destruct;
- (id)_accessKeyQRCodeImage;
- (id)accessKeyQRCodeImageDataWithSize:(double)a0;
- (id)initWithContactInfo:(id)a0 contactType:(long long)a1;
- (void)removeContactAsBenefactorWithCompletion:(id /* block */)a0;
- (void)removeContactAsBeneficiaryWithCompletion:(id /* block */)a0;
- (void)sendInvitationWithCompletion:(id /* block */)a0;

@end
