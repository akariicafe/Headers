@class NSString, AXElement, AXUIClient;
@protocol AXElementInteractionManagerDelegate;

@interface AXElementInteractionManager : NSObject <AXUIClientDelegate> {
    BOOL _interactionEnabled;
    AXElement *_focusedElement;
    struct __AXObserver { } *_axEventObserver;
    AXUIClient *_client;
}

@property (weak, nonatomic) id<AXElementInteractionManagerDelegate> delegate;
@property (nonatomic) BOOL displayCursor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)_sendMessageWithIdentifier:(unsigned long long)a0 errorHandler:(id /* block */)a1;
- (void)_sendMessage:(id)a0 withIdentifier:(unsigned long long)a1 errorHandler:(id /* block */)a2;
- (id)_clientIdentifier;
- (id)_client;
- (void)_initializeAXObserver;
- (void)initializeFocus;
- (int)_registerForAXNotifications:(BOOL)a0;
- (id)_allowDelegateToDecideElement:(id)a0;
- (void)_highlightElement:(id)a0;
- (BOOL)_moveFocusByHitTesting:(long long)a0;
- (void)_moveToElement:(id)a0;
- (void)startInteractionMode;
- (void)endInteractionMode;
- (void)_handleScreenChange;
- (void)_handleLayoutChange;
- (id)focusedElement;
- (BOOL)performDirectionalNavigation:(long long)a0;
- (BOOL)performActivate;

@end
