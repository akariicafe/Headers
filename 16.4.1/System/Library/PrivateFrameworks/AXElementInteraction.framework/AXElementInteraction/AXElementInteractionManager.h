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

- (id)_clientIdentifier;
- (void)_sendMessage:(id)a0 withIdentifier:(unsigned long long)a1 errorHandler:(id /* block */)a2;
- (void)_sendMessageWithIdentifier:(unsigned long long)a0 errorHandler:(id /* block */)a1;
- (id)init;
- (id)_client;
- (void).cxx_destruct;
- (id)focusedElement;
- (int)_registerForAXNotifications:(BOOL)a0;
- (void)_moveToElement:(id)a0;
- (void)initializeFocus;
- (id)_allowDelegateToDecideElement:(id)a0;
- (BOOL)performActivate;
- (void)_handleLayoutChange;
- (void)_handleScreenChange;
- (void)_highlightElement:(id)a0;
- (void)_initializeAXObserver;
- (BOOL)_moveFocusByHitTesting:(long long)a0;
- (void)endInteractionMode;
- (BOOL)performDirectionalNavigation:(long long)a0;
- (void)startInteractionMode;

@end
