@class SBFMobileKeyBag;

@interface SBDataRecoveryController : NSObject {
    SBFMobileKeyBag *_mobileKeyBag;
}

@property (readonly, nonatomic) BOOL dataRecoveryRequired;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMobileKeyBag:(id)a0;
- (void)performDataRecovery;

@end
