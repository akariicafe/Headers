@class NSString, PCSLockManager;

@interface PCSLockAssertion : NSObject

@property (retain) NSString *name;
@property (retain) PCSLockManager *manager;
@property BOOL held;

- (BOOL)holdAssertion;
- (void)dropAssertion;
- (void).cxx_destruct;
- (id)initAssertion:(id)a0 manager:(id)a1;
- (void)dealloc;

@end
