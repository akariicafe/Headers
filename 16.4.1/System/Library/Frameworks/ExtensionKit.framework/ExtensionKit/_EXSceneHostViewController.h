@class NSUUID, _EXExtensionProcessHandle, NSString;

@interface _EXSceneHostViewController : UIViewController

@property (retain) _EXExtensionProcessHandle *extensionProcess;
@property (retain) NSUUID *sessionUUID;
@property (retain) NSString *role;

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithExtensionProcess:(id)a0 sessionUUID:(id)a1 role:(id)a2;

@end
