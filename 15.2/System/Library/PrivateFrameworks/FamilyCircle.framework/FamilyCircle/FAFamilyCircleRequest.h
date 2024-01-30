@class NSString;
@protocol FAFamilyCircleRequestConnectionProvider;

@interface FAFamilyCircleRequest : NSObject

@property (retain, nonatomic) id<FAFamilyCircleRequestConnectionProvider> connectionProvider;
@property (copy) NSString *usernameOrDSID;
@property (copy) NSString *passwordOrToken;

- (id)serviceRemoteObjectWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectWithErrorHandler:(id /* block */)a0;
- (id)serviceConnection;
- (void).cxx_destruct;
- (id)initWithConnectionProvider:(id)a0;
- (id)init;
- (id)requestOptions;

@end
