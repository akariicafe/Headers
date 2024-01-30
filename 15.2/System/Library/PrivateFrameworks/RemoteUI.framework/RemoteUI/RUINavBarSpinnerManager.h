@class NSMutableDictionary;

@interface RUINavBarSpinnerManager : NSObject {
    NSMutableDictionary *_savedRecords;
}

@property (nonatomic) long long activityIndicatorViewStyle;

+ (id)sharedSpinnerManager;

- (void).cxx_destruct;
- (id)init;
- (void)stopAnimatingForIdentifier:(id)a0;
- (void)startAnimatingInNavItem:(id)a0 title:(id)a1 forIdentifier:(id)a2 hideBackButton:(BOOL)a3 hideLeftItems:(BOOL)a4;

@end
