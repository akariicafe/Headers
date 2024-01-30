@class NSString;

@interface TISoftwareLayoutDetailControllerViewController : PSListController

@property (copy, nonatomic) NSString *inputMode;

- (void)dealloc;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)setSoftwareLayout:(id)a0;
- (void)viewDidLoad;
- (void)setShuangpinType:(id)a0;
- (id)newSpecifiers;
- (id)newSpecifiersForChineseShuangpin;
- (id)newSpecifiersForChineseWubi;
- (void)setWubiStandard:(int)a0;
- (void)reloadKeyboardSpecifiers;

@end
