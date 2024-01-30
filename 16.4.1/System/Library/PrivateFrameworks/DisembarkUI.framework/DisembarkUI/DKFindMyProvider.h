@class NSString;

@interface DKFindMyProvider : NSObject <DKFindMyProvider>

@property (copy, nonatomic) id /* block */ stateChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_locatorStateDidChange:(id)a0;
- (void)disableFindMyWithPresentingViewController:(id)a0 completion:(id /* block */)a1;
- (void)fetchFindMyState:(id /* block */)a0;
- (void)preheatFindMyState;

@end
