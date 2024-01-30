@interface CSUIFaceTimeSetupController : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (BOOL)cellularFaceTimeEnabled;
- (void)_handleFaceTimeEntitlementStatusChanged;
- (void)setCellularFaceTimeEnabled:(BOOL)a0 withCompletion:(id /* block */)a1;

@end
