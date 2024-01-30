@class UIFont, NSString, UISwitch, NSArray;

@interface UIInputSwitcherItem : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedSubtitle;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *subtitleFont;
@property (nonatomic) BOOL usesDeviceLanguage;
@property (retain, nonatomic) UISwitch *switchControl;
@property (copy, nonatomic) id /* block */ switchIsOnBlock;
@property (copy, nonatomic) id /* block */ switchToggleBlock;
@property (readonly, nonatomic) BOOL isSegmentedItem;
@property (nonatomic) long long selectedSegmentIndex;
@property (retain, nonatomic) NSArray *segmentTitles;
@property (retain, nonatomic) NSArray *segmentImages;
@property (copy, nonatomic) id /* block */ persistentSelectedIndex;

+ (id)switcherItemWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (void)dealloc;

@end
