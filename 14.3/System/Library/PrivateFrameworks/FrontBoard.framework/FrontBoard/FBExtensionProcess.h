@class FBSExtensionInfo, FBProcess;

@interface FBExtensionProcess : FBProcess {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _hostProcessLock;
    FBProcess *_lock_hostProcess;
}

@property (readonly, nonatomic) FBSExtensionInfo *extensionInfo;
@property (readonly, nonatomic) FBProcess *hostProcess;
@property (readonly, nonatomic) int hostPID;

- (void)_finishInit;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)isExtensionProcess;

@end
