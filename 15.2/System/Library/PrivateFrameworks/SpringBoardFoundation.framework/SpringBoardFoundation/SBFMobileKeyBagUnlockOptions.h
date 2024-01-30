@class NSData;

@interface SBFMobileKeyBagUnlockOptions : NSObject

@property (readonly, copy, nonatomic) NSData *passcode;
@property (readonly, nonatomic) BOOL skipSEKeepUserDataOperation;

- (void).cxx_destruct;
- (id)initWithPasscode:(id)a0;
- (id)initWithPasscode:(id)a0 skipSEKeepUserDataOperation:(BOOL)a1;

@end
