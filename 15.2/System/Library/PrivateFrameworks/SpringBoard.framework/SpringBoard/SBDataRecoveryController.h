@class SBFMobileKeyBag;

@interface SBDataRecoveryController : NSObject {
    SBFMobileKeyBag *_mobileKeyBag;
}

@property (readonly, nonatomic) BOOL dataRecoveryRequired;

- (void).cxx_destruct;
- (id)init;
- (void)performDataRecovery;
- (id)initWithMobileKeyBag:(id)a0;

@end
