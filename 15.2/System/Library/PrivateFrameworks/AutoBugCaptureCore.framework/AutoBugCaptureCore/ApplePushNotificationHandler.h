@class APSConnection, NSString, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface ApplePushNotificationHandler : NSObject <APSConnectionDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) APSConnection *apsConnection;
@property (readonly, nonatomic) NSData *apsToken;
@property (readonly, nonatomic) BOOL apsEnabled;
@property (readonly, nonatomic) BOOL apsDevEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)stringFromData:(id)a0;
+ (BOOL)shouldEnableAPNS;
+ (id)apnsTokenString;
+ (void)activate;
+ (void)deactivate;
+ (BOOL)apnsEnabled;
+ (unsigned long long)currentEnvironment;

- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connectionDidReconnect:(id)a0;
- (void)connection:(id)a0 didChangeConnectedStatus:(BOOL)a1;
- (void)connection:(id)a0 didFailToSendOutgoingMessage:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didSendOutgoingMessage:(id)a1;
- (void)_createApsConnection;
- (void)_shutdownApsConnection;
- (void)_parseUserInfo:(id)a0 apnsIdentifier:(unsigned long long)a1;
- (void)_parseAPSIncomingMessage:(id)a0;

@end
