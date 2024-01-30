@class NSString, NSXPCConnection;
@protocol OSASubmissionServices;

@interface OSASubmissionClient : NSObject <OSASubmissionServices> {
    NSXPCConnection *_connection;
    id<OSASubmissionServices> _synchRemoteObjectProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)submitWithOptions:(id)a0 resultsCallback:(id /* block */)a1;
- (id)initWithErrorHandler:(id /* block */)a0;

@end
