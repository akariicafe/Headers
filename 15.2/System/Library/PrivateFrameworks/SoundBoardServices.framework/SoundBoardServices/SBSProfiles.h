@class NSXPCConnection;
@protocol SBSProfilesImplementer;

@interface SBSProfiles : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSProfilesImplementer> _sbProxy;
}

- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)getInstalledProfiles:(id /* block */)a0;
- (void)removeProfileByIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)installProfileData:(id)a0 completion:(id /* block */)a1;

@end
