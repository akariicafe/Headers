@class NSString, NSMutableDictionary;

@interface SBSpotlightDelegateManager : NSObject <SPUIRemoteSearchViewDelegate>

@property (class, readonly, nonatomic) SBSpotlightDelegateManager *sharedInstance;

@property (retain, nonatomic) NSMutableDictionary *delegatesForLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dismissSearchView;
- (void)removeSpotlightDelegate:(id)a0 forLevel:(unsigned long long)a1;
- (void)addSpotlightDelegate:(id)a0 forLevel:(unsigned long long)a1;
- (void)_modifyDelegatesWithBlock:(id /* block */)a0;
- (id)activeDelegate;

@end
