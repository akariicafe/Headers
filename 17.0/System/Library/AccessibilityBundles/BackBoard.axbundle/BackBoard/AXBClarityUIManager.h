@class AXPasscodeAccessor;

@interface AXBClarityUIManager : NSObject

@property (readonly, nonatomic) AXPasscodeAccessor *passcodeHandle;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)setAdminPasscode:(id)a0;
- (BOOL)validateAdminPasscode:(id)a0;

@end
