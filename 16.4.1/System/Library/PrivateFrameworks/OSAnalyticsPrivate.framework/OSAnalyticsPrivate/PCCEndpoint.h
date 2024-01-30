@class NSArray;
@protocol OSASyncProxyHandler;

@interface PCCEndpoint : NSObject {
    id<OSASyncProxyHandler> _delegate;
}

@property unsigned int fileTimeout;
@property (readonly) NSArray *deviceIds;

- (void).cxx_destruct;
- (BOOL)isDeviceNearby:(id)a0;
- (void)runWithDelegate:(id)a0;
- (id)send:(id)a0 file:(id)a1 metadata:(id)a2 error:(id *)a3;
- (id)send:(id)a0 message:(id)a1 error:(id *)a2;
- (id)synchronize:(id)a0 withOptions:(id)a1;

@end
