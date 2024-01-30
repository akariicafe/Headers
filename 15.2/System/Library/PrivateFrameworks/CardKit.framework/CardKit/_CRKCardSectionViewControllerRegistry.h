@class NSMutableDictionary;

@interface _CRKCardSectionViewControllerRegistry : NSObject {
    NSMutableDictionary *_cardSectionViewControllerClassNameForCardSectionClassName;
}

- (void).cxx_destruct;
- (id)init;
- (void)registerCardSectionViewControllerClass:(Class)a0 forCardSectionClass:(Class)a1;
- (Class)cardSectionViewControllerClassForCardSectionClass:(Class)a0;

@end
