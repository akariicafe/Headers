@class NSXPCConnection, NSArray, NSXPCListenerEndpoint;

@interface SYBacklinkIndicatorClient : NSObject

@property (class, retain, nonatomic) NSXPCListenerEndpoint *_testingEndpoint;

@property (nonatomic) long long action;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) BOOL sentRequest;
@property (copy, nonatomic) NSArray *domainIdentifiers;
@property (copy, nonatomic) NSArray *linkIdentifiers;
@property (nonatomic) unsigned int displayID;
@property (nonatomic) long long corner;

+ (id)clientWithDomainIdentifiers:(id)a0 linkIdentifiers:(id)a1;
+ (void)toggleIndicatorWithDisplayID:(unsigned int)a0 corner:(long long)a1;
+ (void)hideIndicator;
+ (id)clientWithLinkIdentifiers:(id)a0;
+ (void)toggleIndicator;
+ (void)hotCornerExited;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_createConnectionIfNeeded;
- (void)_configureConnectionAndResume;
- (void)requestIndicatorWithCompletion:(id /* block */)a0;
- (void)_resetConnectionIfNecessary;
- (BOOL)_shouldSendIndicatorRequest;
- (void)_sendIndicatorRequestWithCompletion:(id /* block */)a0;
- (long long)_showIndicatorAction;
- (void)_recordLastShowIndicatorRequestTimestamp;
- (void)_clearLastShowIndicatorRequestTimestamp;

@end
