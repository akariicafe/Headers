@class NSString, _WKAutomationSessionConfiguration;
@protocol _WKAutomationSessionDelegate;

@interface _WKAutomationSession : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebAutomationSession> { struct type { unsigned char __lx[336]; } data; } _session;
    struct RetainPtr<_WKAutomationSessionConfiguration> { void *m_ptr; } _configuration;
    struct WeakObjCPtr<id<_WKAutomationSessionDelegate> > { id m_weakReference; } _delegate;
}

@property (copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) _WKAutomationSessionConfiguration *configuration;
@property (weak, nonatomic) id<_WKAutomationSessionDelegate> delegate;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, nonatomic, getter=isSimulatingUserInteraction) BOOL simulatingUserInteraction;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)terminate;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (id).cxx_construct;

@end
