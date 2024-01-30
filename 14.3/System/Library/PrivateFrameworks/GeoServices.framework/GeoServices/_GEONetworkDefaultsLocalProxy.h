@class NSString, geo_isolater, NSMutableArray;
@protocol _GEONetworkDefaultsServerProxyDelegate;

@interface _GEONetworkDefaultsLocalProxy : NSObject <_GEONetworkDefaultsServerProxy, GEOPListStateCapturing> {
    geo_isolater *_isolation;
    NSMutableArray *_updateCompletionHandlers;
    unsigned long long _stateCaptureHandle;
}

@property (weak, nonatomic) id<_GEONetworkDefaultsServerProxyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_processNetworkDefaultsResponse:(id)a0 data:(id)a1 error:(id)a2 request:(id)a3;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)updateNetworkDefaults:(id /* block */)a0;
- (id)_urlRequestForNetworkDefaults;
- (void)_updateNetworkDefaults;
- (void)_updateWithNewConfig:(id)a0 error:(id)a1 request:(id)a2 response:(id)a3;

@end
