@class STManagementState;

@interface STLocationSharingModificationClient : NSObject

@property (readonly) STManagementState *managementState;

- (id)init;
- (void).cxx_destruct;
- (void)isLocationSharingModificationAllowedForUserID:(id)a0 completionHandler:(id /* block */)a1;
- (void)setLocationSharingModificationAllowed:(BOOL)a0 forUserID:(id)a1 completionHandler:(id /* block */)a2;

@end
