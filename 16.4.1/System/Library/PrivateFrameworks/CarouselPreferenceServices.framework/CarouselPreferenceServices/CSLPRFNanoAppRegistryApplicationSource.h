@class NARApplicationWorkspace;
@protocol CSLPRFNanoAppRegistryApplicationSourceDelegate;

@interface CSLPRFNanoAppRegistryApplicationSource : NSObject {
    NARApplicationWorkspace *_workspace;
}

@property (weak, nonatomic) id<CSLPRFNanoAppRegistryApplicationSourceDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_appsDidChange;
- (void)allApplicationsWithCompletion:(id /* block */)a0;

@end
