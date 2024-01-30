@class _CRKCardSectionViewControllerRegistry;

@interface _CRKCardSectionViewControllerFactory : NSObject {
    _CRKCardSectionViewControllerRegistry *_registry;
}

+ (id)_sharedInstance;
+ (id)cardSectionViewControllerForCardSection:(id)a0;
+ (void)registerCardSectionViewControllerClass:(Class)a0;

- (void).cxx_destruct;
- (id)init;
- (id)_cardSectionViewControllerForCardSection:(id)a0;
- (void)_registerCardSectionViewControllerClass:(Class)a0;

@end
