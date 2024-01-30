@class NSMutableDictionary;

@interface PSNavBarSpinnerManager : NSObject {
    NSMutableDictionary *_savedRecords;
}

+ (id)sharedSpinnerManager;

- (void)startAnimatingInNavItem:(id)a0 forIdentifier:(id)a1 hideBackButton:(BOOL)a2;
- (void)startAnimatingInNavItem:(id)a0 forIdentifier:(id)a1;
- (void)stopAnimatingForIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
