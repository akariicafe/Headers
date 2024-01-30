@class NSMutableDictionary;

@interface BFFNavBarSpinnerManager : NSObject {
    NSMutableDictionary *_savedRightItems;
    NSMutableDictionary *_savedLeftItems;
    NSMutableDictionary *_navigationItems;
}

+ (id)sharedSpinnerManager;

- (void).cxx_destruct;
- (id)init;
- (void)startAnimatingInNavItem:(id)a0 forIdentifier:(id)a1;
- (void)stopAnimatingForIdentifier:(id)a0;

@end
