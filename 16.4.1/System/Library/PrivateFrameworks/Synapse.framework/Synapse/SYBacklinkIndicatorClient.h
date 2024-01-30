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

+ (void)toggleIndicator;
+ (void)hotCornerExited;
+ (id)clientWithDomainIdentifiers:(id)a0 linkIdentifiers:(id)a1;
+ (id)clientWithLinkIdentifiers:(id)a0;
+ (void)hideIndicator;
+ (void)toggleIndicatorWithDisplayID:(unsigned int)a0 corner:(long long)a1;

- (void)_configureConnectionAndResume;
- (void)dealloc;
- (id)init;
- (void)_createConnectionIfNeeded;
- (void).cxx_destruct;
- (void)requestIndicatorWithCompletion:(id /* block */)a0;
- (void)_clearLastShowIndicatorRequestTimestamp;
- (void)_recordLastShowIndicatorRequestTimestamp;
- (void)_resetConnectionIfNecessary;
- (void)_sendIndicatorRequestWithCompletion:(id /* block */)a0;
- (BOOL)_shouldSendIndicatorRequest;
- (long long)_showIndicatorAction;

@end
