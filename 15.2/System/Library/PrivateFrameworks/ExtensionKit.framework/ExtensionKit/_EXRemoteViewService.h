@class _EXHostViewControllerConfiguration, _EXExtensionProcess, NSUUID;

@interface _EXRemoteViewService : _UIRemoteViewService {
    NSUUID *_contextToken;
}

@property (readonly) _EXHostViewControllerConfiguration *configuration;
@property (readonly) _EXExtensionProcess *extensionProcess;

- (id)contextToken;
- (id)identifier;
- (id)initWithExtensionConfiguration:(id)a0 extensionProcess:(id)a1 contextToken:(id)a2;
- (id)multipleInstancesUUID;
- (BOOL)multipleInstances;
- (void).cxx_destruct;
- (id)xpcServiceNameRoot;
- (void)beginUsing:(id /* block */)a0;
- (BOOL)overridesHostAppearance;
- (int)processIdentifier;
- (void)endUsing:(id /* block */)a0;
- (id)viewControllerClassName;

@end
