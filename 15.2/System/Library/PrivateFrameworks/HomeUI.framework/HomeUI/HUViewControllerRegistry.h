@class NSMutableDictionary;

@interface HUViewControllerRegistry : NSObject

@property (readonly, nonatomic) NSMutableDictionary *viewControllerClassesByIdentifier;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (Class)viewControllerClassForIdentifier:(id)a0;
- (void)registerViewControllerClass:(Class)a0 forIdentifier:(id)a1;

@end
