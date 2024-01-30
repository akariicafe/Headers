@class NSString;

@interface WBSFileLockFactoryPOSIX : NSObject <WBSFileLockFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)coordinationLockURL:(id)a0;
- (id)lockURL:(id)a0 error:(id *)a1;

@end
