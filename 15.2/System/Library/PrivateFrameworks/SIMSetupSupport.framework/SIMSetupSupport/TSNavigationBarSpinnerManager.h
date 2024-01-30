@class NSMutableDictionary;

@interface TSNavigationBarSpinnerManager : NSObject

@property (retain) NSMutableDictionary *navigationItems;
@property (retain) NSMutableDictionary *previousLeftBarButtonItems;
@property (retain) NSMutableDictionary *previousRightBarButtonItems;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)startSpinnerInNavigationItem:(id)a0 withIdentifier:(id)a1;
- (void)stopSpinnerForIdentifier:(id)a0;
- (void)stopSpinnerInNavigationItem:(id)a0 withIdentifier:(id)a1;

@end
