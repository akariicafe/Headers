@class NSMutableDictionary;

@interface BFFNavBarSpinnerManager : NSObject {
    NSMutableDictionary *_savedRightItems;
    NSMutableDictionary *_savedLeftItems;
    NSMutableDictionary *_navigationItems;
}

+ (id)sharedSpinnerManager;

- (id)init;
- (void).cxx_destruct;
- (void)startAnimatingInNavItem:(id)a0 forIdentifier:(id)a1;
- (void)stopAnimatingForIdentifier:(id)a0;

@end
