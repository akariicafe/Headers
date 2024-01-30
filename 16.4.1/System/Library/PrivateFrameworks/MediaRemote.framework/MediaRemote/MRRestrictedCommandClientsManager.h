@class NSArray;

@interface MRRestrictedCommandClientsManager : NSObject

@property (retain, nonatomic) NSArray *lastAcceptedTokens;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_restrictCommandClientsTo:(id)a0;
- (void)republishStateIfNeeded;
- (id)restrictCommandClientsTo:(id)a0;

@end
