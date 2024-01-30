@class NSArray, NSMutableArray;

@interface PHNetworkFetcher : NSObject

@property struct __CTServerConnection { } *server;
@property (retain) NSMutableArray *mutableNetworks;
@property (nonatomic) unsigned long long state;
@property (copy) id /* block */ networkNotificationHandler;
@property (readonly) NSArray *networks;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateNetworkSelectionStatus;
- (void)fetchNetworkList;
- (void)selectNetwork:(id)a0;

@end
