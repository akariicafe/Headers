@class SBFMobileKeyBag;

@interface SBDataRecoveryController : NSObject {
    SBFMobileKeyBag *_mobileKeyBag;
}

@property (readonly, nonatomic) BOOL dataRecoveryRequired;

- (id)init;
- (void).cxx_destruct;
- (void)performDataRecovery;
- (id)initWithMobileKeyBag:(id)a0;

@end
