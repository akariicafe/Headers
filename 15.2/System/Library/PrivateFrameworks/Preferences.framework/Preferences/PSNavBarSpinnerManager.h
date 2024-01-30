@class NSMutableDictionary;

@interface PSNavBarSpinnerManager : NSObject {
    NSMutableDictionary *_savedRecords;
}

+ (id)sharedSpinnerManager;

- (void).cxx_destruct;
- (id)init;
- (void)startAnimatingInNavItem:(id)a0 forIdentifier:(id)a1;
- (void)startAnimatingInNavItem:(id)a0 forIdentifier:(id)a1 hideBackButton:(BOOL)a2;
- (void)stopAnimatingForIdentifier:(id)a0;

@end
