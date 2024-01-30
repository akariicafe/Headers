@class NSString, FBSDisplayIdentity;
@protocol SBDisplayWindowingModeResolverDelegate;

@interface SBSystemShellExtendedDisplayResolver : NSObject <SBWindowingModeResolver> {
    FBSDisplayIdentity *_rootDisplayIdentity;
}

@property (weak, nonatomic) id<SBDisplayWindowingModeResolverDelegate> delegate;
@property (readonly, nonatomic) FBSDisplayIdentity *rootDisplayIdentity;
@property (readonly, nonatomic) long long displayWindowingMode;
@property (readonly, nonatomic) BOOL isWindowingModeAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRootDisplay:(id)a0;

@end
