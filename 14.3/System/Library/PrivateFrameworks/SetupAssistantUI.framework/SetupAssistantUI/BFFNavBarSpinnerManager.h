@class NSMutableDictionary;

@interface BFFNavBarSpinnerManager : NSObject {
    NSMutableDictionary *_savedRightItems;
    NSMutableDictionary *_savedLeftItems;
    NSMutableDictionary *_navigationItems;
}

+ (id)sharedSpinnerManager;

- (void)startAnimatingInNavItem:(id)a0 forIdentifier:(id)a1;
- (void)stopAnimatingForIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
