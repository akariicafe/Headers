@class NSString, PCSLockManager;

@interface PCSLockAssertion : NSObject

@property (retain) NSString *name;
@property (retain) PCSLockManager *manager;
@property BOOL held;

- (void).cxx_destruct;
- (void)dealloc;
- (void)dropAssertion;
- (id)initAssertion:(id)a0 manager:(id)a1;
- (BOOL)holdAssertion;

@end
