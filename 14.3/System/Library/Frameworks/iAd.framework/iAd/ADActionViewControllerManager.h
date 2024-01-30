@class NSMutableDictionary;

@interface ADActionViewControllerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *servingAdSpaces;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)actionViewController:(id)a0 dismissForIdentifier:(id)a1;
- (void)requestActionViewControllerForAdSpace:(id)a0;
- (void)cancelRequestForActionViewControllerForAdSpace:(id)a0;

@end
