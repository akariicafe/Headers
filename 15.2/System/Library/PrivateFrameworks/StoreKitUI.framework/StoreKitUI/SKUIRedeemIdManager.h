@class SKUIPinnedFooterView, SKUIClientContext, NSString, NSIndexPath, UITableView;
@protocol SKUIRedeemIdManagerDelegate;

@interface SKUIRedeemIdManager : NSObject <SKUIRedeemIdTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) NSIndexPath *activeIndexPath;
@property (retain, nonatomic) SKUIPinnedFooterView *pinnedFooterView;
@property (weak, nonatomic) id<SKUIRedeemIdManagerDelegate> delegate;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (long long)_numberOfRowsInSection:(long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setFooterHidden:(BOOL)a0;
- (void)dismissActiveCell;
- (id)initWithClientContext:(id)a0;
- (void)handleNextPressed;
- (void)redeemIdCell:(id)a0 didReturnWithText:(id)a1;
- (void)redeemIdCell:(id)a0 didChangeToText:(id)a1;
- (id)_disclosureAttributedString;
- (long long)_autoCapitalizationTypeForIndexPath:(id)a0;
- (double)_heightForDisclosureFooter;
- (id)_placeholderTextForIndexPath:(id)a0;
- (long long)_keyboardTypeForIndexPath:(id)a0;
- (long long)_returnKeyTypeForIndexPath:(id)a0;
- (id)_nextIndexPath:(id)a0;
- (id)_pcLinkString;
- (id)_regulationsLinkString;
- (double)_tableViewNonFooterContentHeight;

@end
