@class NSString, NSXPCConnection;

@interface CPXPCConnection : NSObject <CPXPCConnection>

@property (retain, nonatomic) NSXPCConnection *searchConnection;
@property BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void).cxx_destruct;
- (id)init;
- (id)searchServiceProxyWithErrorHandler:(id /* block */)a0;

@end
