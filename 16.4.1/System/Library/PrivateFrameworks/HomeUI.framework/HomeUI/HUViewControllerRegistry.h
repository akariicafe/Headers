@class NSMutableDictionary;

@interface HUViewControllerRegistry : NSObject

@property (readonly, nonatomic) NSMutableDictionary *viewControllerClassesByIdentifier;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)registerViewControllerClass:(Class)a0 forIdentifier:(id)a1;
- (Class)viewControllerClassForIdentifier:(id)a0;

@end
