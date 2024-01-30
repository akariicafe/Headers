@class NSArray, NSString, CNMeCardSharingRowItem;

@interface CNMeCardSharingAudienceDataSource : NSObject <CNMeCardSharingSectionDataSource>

@property (nonatomic) BOOL shouldShowEveryone;
@property (retain, nonatomic) NSArray *valuesArray;
@property (retain, nonatomic) CNMeCardSharingRowItem *selectedItem;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) unsigned long long selectedSharingAudience;
@property (readonly, nonatomic) unsigned long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfItems;
- (void)didSelectItemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reloadItems;
- (id)itemForIndex:(unsigned long long)a0;
- (BOOL)supportsSelection;
- (id)sectionHeaderLabel;
- (id)sectionFooterLabel;
- (id)initWithSelectedSharingAudience:(unsigned long long)a0;
- (unsigned long long)indexForSharingAudience:(unsigned long long)a0;
- (unsigned long long)sharingAudienceForIndex:(unsigned long long)a0;

@end
