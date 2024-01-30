@class NSString, NSMutableArray, CRKClassKitCurrentUserProvider;
@protocol CRKPersonaBlockPerforming;

@interface CRKClassKitPersonaAdopter : NSObject

@property (readonly, nonatomic) id<CRKPersonaBlockPerforming> personaBlockPerformer;
@property (readonly, nonatomic) CRKClassKitCurrentUserProvider *currentUserProvider;
@property (readonly, nonatomic) NSMutableArray *stashedBlocks;
@property (copy, nonatomic) NSString *currentPersonaUniqueString;

+ (id)currentUserProviderObservedKeyPaths;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithClassKitFacade:(id)a0 personaBlockPerformer:(id)a1;
- (void)performBlockWithClassKitPersona:(id /* block */)a0;
- (void)callStashedBlocks;
- (void)currentUserChanged;
- (void)callStashedBlocksIfPersonaFetched;
- (BOOL)personaFetched;
- (id)captureStashedBlocks;

@end
