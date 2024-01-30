@class NSUUID, NSExtension;
@protocol PKPlugIn;

@interface _UIConcreteRemoteViewService : _UIRemoteViewService {
    BOOL _overridesHostAppearance;
    NSUUID *_contextToken;
}

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id<PKPlugIn> plugin;

- (id)contextToken;
- (id)identifier;
- (BOOL)multipleInstances;
- (void).cxx_destruct;
- (id)initWithExtension:(id)a0 andContextToken:(id)a1;
- (id)xpcServiceNameRoot;
- (void)beginUsing:(id /* block */)a0;
- (id)multipleInstanceUUID;
- (void)updateOverridesHostAppearance;
- (BOOL)overridesHostAppearance;
- (int)processIdentifier;
- (void)endUsing:(id /* block */)a0;
- (id)viewControllerClassName;

@end
