@class PSSpecifier, NSArray, PSListController;

@interface CTUIListLoadingGroup : NSObject

@property (weak, nonatomic) PSListController *hostController;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) NSArray *specifiers;
@property (retain, nonatomic) PSSpecifier *spinnerSpecifier;

- (void).cxx_destruct;
- (id)initWithHostController:(id)a0 groupSpecifier:(id)a1;

@end
