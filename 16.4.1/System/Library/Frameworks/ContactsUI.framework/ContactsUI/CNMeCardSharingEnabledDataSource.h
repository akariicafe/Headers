@class NSArray, UISwitch, NSString;
@protocol CNMeCardSharingEnabledDelegate;

@interface CNMeCardSharingEnabledDataSource : NSObject <CNMeCardSharingSectionDataSource>

@property (retain, nonatomic) UISwitch *enabledSwitch;
@property (retain, nonatomic) NSArray *items;
@property (weak, nonatomic) id<CNMeCardSharingEnabledDelegate> delegate;
@property (nonatomic) BOOL sharingEnabled;
@property (readonly, nonatomic) unsigned long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(unsigned long long)a0;
- (void)buildItems;
- (void)didToggleEnabledSwitch:(id)a0;
- (id)initWithSharingEnabled:(BOOL)a0;
- (id)itemForIndex:(unsigned long long)a0;
- (id)sectionFooterLabel;
- (id)sectionHeaderLabel;
- (BOOL)supportsSelection;

@end
