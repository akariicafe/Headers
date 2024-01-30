@class APSConnection, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPushConnection : NSObject

@property (retain, nonatomic) APSConnection *apsConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (retain, nonatomic, setter=setAPSEnvironmentString:) NSString *apsEnvironmentString;

+ (id)sharedConnectionForAPSEnvironmentString:(id)a0;

- (void)connectionDidReconnect:(id)a0;
- (void)connection:(id)a0 didChangeConnectedStatus:(BOOL)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (id)initWithEnvironment:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)getToken:(id /* block */)a0;

@end
