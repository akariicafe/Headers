@class NSArray, NSString, WFVariableConfigurationOption;
@protocol WFVariableConfigurationOptionsViewControllerDelegate;

@interface WFVariableConfigurationOptionsViewController : UITableViewController

@property (readonly, nonatomic) NSArray *options;
@property (readonly, nonatomic) WFVariableConfigurationOption *defaultOption;
@property (nonatomic) long long selectedOptionIndex;
@property (weak, nonatomic) id<WFVariableConfigurationOptionsViewControllerDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *userIdentifier;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)initWithTitle:(id)a0 userIdentifier:(id)a1 options:(id)a2 defaultOption:(id)a3 selectedOption:(id)a4;

@end
