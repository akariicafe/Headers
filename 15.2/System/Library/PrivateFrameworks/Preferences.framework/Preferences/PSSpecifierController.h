@class PSSpecifier, NSMutableArray, UIViewController;
@protocol PSSpecifierControllerDelegate;

@interface PSSpecifierController : NSObject

@property (retain, nonatomic) NSMutableArray *specifiers;
@property (retain, nonatomic) NSMutableArray *bundleControllers;
@property (retain, nonatomic) NSMutableArray *groups;
@property (weak, nonatomic) UIViewController<PSSpecifierControllerDelegate> *viewController;
@property (retain, nonatomic) PSSpecifier *specifier;

- (long long)numberOfSections;
- (id)specifierAtIndexPath:(id)a0;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (BOOL)getGroup:(long long *)a0 row:(long long *)a1 ofSpecifierID:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfRowsInSection:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)specifierForID:(id)a0;
- (void)reloadSpecifiers;
- (id)loadSpecifiers;
- (id)loadSpecifiersFromPlistName:(id)a0 target:(id)a1 bundle:(id)a2;
- (id)loadSpecifiersFromPlistName:(id)a0 target:(id)a1;
- (void)prepareSpecifiersMetadata;
- (BOOL)getGroup:(long long *)a0 row:(long long *)a1 ofSpecifierAtIndex:(long long)a2;
- (void)createGroupIndices;
- (long long)indexOfGroup:(long long)a0;
- (long long)indexForIndexPath:(id)a0;
- (id)specifierAtIndex:(long long)a0;
- (BOOL)getGroup:(long long *)a0 row:(long long *)a1 ofSpecifier:(id)a2;
- (BOOL)_getGroup:(long long *)a0 row:(long long *)a1 ofSpecifierAtIndex:(long long)a2 groups:(id)a3;
- (id)_createGroupIndices:(id)a0;

@end
