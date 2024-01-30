@class NSString, MSMediaStreamDaemon, MSResetServerProtocol;

@interface MSResetServer : NSObject <MSResetServerProtocolDelegate> {
    MSResetServerProtocol *_protocol;
    id _selfReference;
}

@property (readonly, nonatomic) NSString *personID;
@property (nonatomic) MSMediaStreamDaemon *daemon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resetServerObjectWithPersonID:(id)a0 baseURL:(id)a1;

- (id)initWithPersonID:(id)a0 baseURL:(id)a1;
- (void).cxx_destruct;
- (void)resetServerProtocol:(id)a0 didFinishWithError:(id)a1;
- (void)resetServerProtocol:(id)a0 didReceiveAuthenticationError:(id)a1;
- (void)resetServer;

@end
