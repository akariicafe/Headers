@class NSString;

@interface TISoftwareLayoutDetailControllerViewController : PSListController

@property (copy, nonatomic) NSString *inputMode;

- (id)specifiers;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)setSoftwareLayout:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setShuangpinType:(id)a0;
- (id)newSpecifiers;
- (id)newSpecifiersForChineseShuangpin;
- (id)newSpecifiersForChineseWubi;
- (void)setWubiStandard:(int)a0;
- (void)reloadKeyboardSpecifiers;

@end
