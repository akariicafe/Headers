@class NSString, NSMutableDictionary;

@interface SBSpotlightDelegateManager : NSObject <SPUIRemoteSearchViewDelegate>

@property (class, readonly, nonatomic) SBSpotlightDelegateManager *sharedInstance;

@property (retain, nonatomic) NSMutableDictionary *delegatesForLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissSearchView;
- (id)activeDelegate;
- (void)removeSpotlightDelegate:(id)a0 forLevel:(unsigned long long)a1;
- (void)addSpotlightDelegate:(id)a0 forLevel:(unsigned long long)a1;
- (void)searchViewContentAvailabilityDidChange;
- (void)searchViewKeyboardPresentationStateDidChange;
- (void)_modifyDelegatesWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
