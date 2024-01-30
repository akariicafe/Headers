@class NSMutableSet, NSXPCConnection;

@interface WBSSearchHelperConnectionManager : NSObject {
    NSMutableSet *_clients;
}

@property (retain, nonatomic) NSXPCConnection *searchHelperConnection;

+ (id)sharedManager;

- (void)removeClient:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)searchHelperConnectionRequestedByClient:(id)a0;

@end
