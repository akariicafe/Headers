@class NSString;

@interface EKUIManagedNavigationController : UINavigationController <EKUIManagedViewController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canManagePresentationStyle;
- (BOOL)wantsManagement;
- (BOOL)canBeDirectlyManaged;

@end
