@class NSMutableDictionary;

@interface PSNavBarSpinnerManager : NSObject {
    NSMutableDictionary *_savedRecords;
}

+ (id)sharedSpinnerManager;

- (id)init;
- (void).cxx_destruct;
- (void)startAnimatingInNavItem:(id)a0 forIdentifier:(id)a1;
- (void)startAnimatingInNavItem:(id)a0 forIdentifier:(id)a1 hideBackButton:(BOOL)a2;
- (void)stopAnimatingForIdentifier:(id)a0;

@end
