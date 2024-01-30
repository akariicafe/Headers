@class CDMServiceCenter, NSString, XPCStreamEventRegister;
@protocol CDMClientDelegate;

@interface CDMFoundationClient : CDMClientInterface {
    id<CDMClientDelegate> _delegate;
    CDMServiceCenter *_serviceCenter;
    NSString *_localeIdentifier;
    XPCStreamEventRegister *_eventRegister;
}

+ (id)createEmptyNluRequestId;

- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)processCDMNluRequest:(id)a0;
- (BOOL)registerWithAssetsDelegate:(id)a0;
- (void)setup:(id)a0;
- (BOOL)areAssetsAvailable:(id)a0;
- (void)doHandleCommand:(id)a0 forCallback:(id /* block */)a1;
- (void)doServiceCenterInitWithConfig:(id)a0;
- (void)handleOverridesAssetUpdateEvent:(id)a0;
- (BOOL)handleXPCEvent:(id)a0 fromStream:(id)a1;
- (id)handleableXPCEventStreams;
- (BOOL)isLighthouseAPIEnabled;
- (void)processCDMNluRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processCDMNluRequest:(id)a0 nullableCompletionHandler:(id /* block */)a1;
- (void)setup:(id)a0 completionHandler:(id /* block */)a1;
- (void)setup:(id)a0 nullableCompletionHandler:(id /* block */)a1;

@end
