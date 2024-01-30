@class COStateService, COHomeKitAdapter, COMeshController;
@protocol COServiceListenerProvider;

@interface _tvOSHomeMesh : NSObject

@property (readonly, nonatomic) COMeshController *mesh;
@property (readonly, nonatomic) id<COServiceListenerProvider> provider;
@property (readonly, nonatomic) COStateService *stateService;
@property (readonly, nonatomic) COHomeKitAdapter *homeKitAdapter;

+ (id)homeMeshWithHomeIdentifier:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHomeIdentifier:(id)a0;

@end
