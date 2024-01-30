@class NSString, NSArray, UIImage, NSNumber;

@interface UIShortcutActivity : UIApplicationExtensionActivity

@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSString *singleUseToken;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *sortValue;
@property (retain, nonatomic) NSArray *photosAssetIdentifiers;

- (id)activityType;
- (void).cxx_destruct;
- (void)prepareWithActivityExtensionItemData:(id)a0;
- (id)_actionImage;
- (id)initPartialShortcutWithName:(id)a0 identifier:(id)a1 image:(id)a2 sortValue:(id)a3;
- (id)initWithApplicationExtension:(id)a0 singleUseToken:(id)a1 photosAssetIdentifiers:(id)a2;
- (id)activityTitle;
- (long long)_defaultSortGroup;
- (id)initWithPartial:(id)a0;

@end
