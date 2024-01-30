@class NSArray, PSSpecifier, PSListController;

@interface CTUIListWithHeaderLoadingGroup : NSObject

@property (weak, nonatomic) PSListController *hostController;
@property (retain, nonatomic) NSArray *headerSpecifiers;
@property (retain, nonatomic) NSArray *contentSpecifiers;
@property (retain, nonatomic) PSSpecifier *spinnerSpecifier;

- (void).cxx_destruct;
- (id)specifiers;
- (id)initWithHostController:(id)a0;

@end
