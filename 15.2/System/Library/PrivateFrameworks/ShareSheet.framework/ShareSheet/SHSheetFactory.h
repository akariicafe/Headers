@interface SHSheetFactory : NSObject

+ (id)createMainPresenterWithContext:(id)a0;
+ (id)createContentViewControllerWithSession:(id)a0 presenter:(id)a1;
+ (id)createAirdropViewControllerWithNoContentView:(BOOL)a0 delegate:(id)a1;
+ (id)createUserDefaultsViewControllerWithContext:(id)a0 delegate:(id)a1;
+ (id)createOptionsViewControllerWithContext:(id)a0 delegate:(id)a1;

@end
