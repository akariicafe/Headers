@class RWIProtocolConfiguration;

@interface RWIProtocolInspector : NSObject {
    struct AugmentableInspectorController { void /* function */ **x0; } *_inspectorController;
    struct RetainPtr<RWIProtocolConfiguration> { void *m_ptr; } _configuration;
    struct unique_ptr<RWIAugmentableInspectorControllerClient, std::__1::default_delete<RWIAugmentableInspectorControllerClient> > { struct __compressed_pair<RWIAugmentableInspectorControllerClient *, std::__1::default_delete<RWIAugmentableInspectorControllerClient> > { struct RWIAugmentableInspectorControllerClient *__value_; } __ptr_; } _inspectorControllerClient;
}

@property (readonly, nonatomic) RWIProtocolConfiguration *configuration;
@property (readonly, nonatomic) BOOL connected;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithController:(struct AugmentableInspectorController { void /* function */ **x0; } *)a0;
- (void)inspectorControllerDestroyed;

@end
