@class NSString;

@interface TISoftwareLayoutDetailControllerViewController : PSListController

@property (copy, nonatomic) NSString *inputMode;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)setSoftwareLayout:(id)a0;
- (void)setShuangpinType:(id)a0;
- (id)newSpecifiers;
- (id)newSpecifiersForChineseShuangpin;
- (id)newSpecifiersForChineseWubi;
- (void)reloadKeyboardSpecifiers;
- (void)setWubiStandard:(int)a0;

@end
