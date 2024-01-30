@class NSArray, NSMutableSet;

@interface DTAssertionPidInfo : NSObject {
    NSMutableSet *_clientsWithClaim;
}

@property (readonly) NSArray *blocks;
@property (readonly) int pid;

- (void).cxx_destruct;
- (void)addClaimForClient:(id)a0;
- (BOOL)hasNoMoreClients;
- (id)initForPid:(int)a0 withRemoveBlocks:(id)a1 onBehalfOfClient:(id)a2;
- (void)removeAssertions;
- (BOOL)removeClaimFromClient:(id)a0;

@end
