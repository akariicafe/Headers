@class IKJSInspectorController, NSString, NSMutableDictionary;

@interface IKJSInspectorNetworkAgent : NSObject <RWIProtocolNetworkDomainHandler> {
    NSMutableDictionary *_loaders;
}

@property (readonly, weak, nonatomic) IKJSInspectorController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)unregisterLoaderWithIdentifier:(id)a0;
- (void)addInterceptionWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 url:(id)a2 stage:(long long *)a3;
- (void)clearAllTrackedLoaders;
- (void)disableWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (void)enableWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (void)getResponseBodyWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 requestId:(id)a2;
- (void)getSerializedCertificateWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 requestId:(id)a2;
- (id)initWithInspectorController:(id)a0;
- (void)interceptContinueWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 requestId:(id)a2;
- (void)interceptWithResponseWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 requestId:(id)a2 content:(id)a3 base64Encoded:(BOOL)a4 mimeType:(id *)a5 status:(int *)a6 statusText:(id *)a7 headers:(id *)a8;
- (void)loadResourceWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 frameId:(id)a2 url:(id)a3;
- (id)registerLoaderWithIdentifier:(id)a0;
- (void)removeInterceptionWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 url:(id)a2 stage:(long long *)a3;
- (void)resolveWebSocketWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 requestId:(id)a2 objectGroup:(id *)a3;
- (void)setExtraHTTPHeadersWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 headers:(id)a2;
- (void)setInterceptionEnabledWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 enabled:(BOOL)a2;
- (void)setResourceCachingDisabledWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 disabled:(BOOL)a2;

@end
