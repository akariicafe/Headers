@class NSArray, PSSpecifier, PSListController;

@interface CTUIListWithHeaderLoadingGroup : NSObject

@property (weak, nonatomic) PSListController *hostController;
@property (retain, nonatomic) NSArray *headerSpecifiers;
@property (retain, nonatomic) NSArray *contentSpecifiers;
@property (retain, nonatomic) PSSpecifier *spinnerSpecifier;

- (id)specifiers;
- (void).cxx_destruct;
- (id)initWithHostController:(id)a0;

@end
