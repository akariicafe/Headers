@class NSString, NSMutableDictionary;

@interface SBSpotlightDelegateManager : NSObject <SPUIRemoteSearchViewDelegate>

@property (class, readonly, nonatomic) SBSpotlightDelegateManager *sharedInstance;

@property (retain, nonatomic) NSMutableDictionary *delegatesForLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activeDelegate;
- (void)_modifyDelegatesWithBlock:(id /* block */)a0;
- (void)removeSpotlightDelegate:(id)a0 forLevel:(unsigned long long)a1;
- (void)dismissSearchView;
- (void).cxx_destruct;
- (void)addSpotlightDelegate:(id)a0 forLevel:(unsigned long long)a1;

@end
