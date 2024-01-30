@class NSXPCConnection;
@protocol SBSProfilesImplementer;

@interface SBSProfiles : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSProfilesImplementer> _sbProxy;
}

- (id)initWithTarget:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)installProfileData:(id)a0 completion:(id /* block */)a1;
- (void)getInstalledProfiles:(id /* block */)a0;
- (void)removeProfileByIdentifier:(id)a0 completion:(id /* block */)a1;

@end
