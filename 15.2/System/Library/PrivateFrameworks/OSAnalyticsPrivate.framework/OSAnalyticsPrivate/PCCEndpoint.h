@class NSArray;
@protocol OSASyncProxyHandler;

@interface PCCEndpoint : NSObject {
    id<OSASyncProxyHandler> _delegate;
}

@property unsigned int fileTimeout;
@property (readonly) NSArray *deviceIds;

- (void).cxx_destruct;
- (void)runWithDelegate:(id)a0;
- (BOOL)isDeviceNearby:(id)a0;
- (id)synchronize:(id)a0 withOptions:(id)a1;
- (id)send:(id)a0 message:(id)a1 error:(id *)a2;
- (id)send:(id)a0 file:(id)a1 metadata:(id)a2 error:(id *)a3;

@end
