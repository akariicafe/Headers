@class NSString;

@interface BKSWorkspace : NSObject <RBSServiceDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)service:(id)a0 didLoseInheritances:(id)a1;
- (void)service:(id)a0 didReceiveInheritances:(id)a1;
- (id)init;

@end
