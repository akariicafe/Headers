@class NSString;

@interface ACDClientProvider : NSObject <ACDClientProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createClientForConnection:(id)a0;

@end
