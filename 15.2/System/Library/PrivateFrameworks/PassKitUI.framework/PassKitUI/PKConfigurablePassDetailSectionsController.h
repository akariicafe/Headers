@class NSArray, NSString, NSDictionary;
@protocol PKConfigurablePassDetailSectionsControllerDelegate;

@interface PKConfigurablePassDetailSectionsController : NSObject <PKTableViewSectionController> {
    NSDictionary *_sectionMap;
    NSDictionary *_fieldMap;
}

@property (weak, nonatomic) id<PKConfigurablePassDetailSectionsControllerDelegate> delegate;
@property (nonatomic) BOOL useBridgeStyle;
@property (retain, nonatomic) NSArray *sectionIdentifiers;
@property (readonly, nonatomic) NSArray *activePassDetailSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPaymentPass:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSectionIdentifier:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (id)titleForHeaderInSectionIdentifier:(id)a0;
- (id)titleForFooterInSectionIdentifier:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (BOOL)shouldHighlightRowAtIndexPath:(id)a0 sectionIdentifier:(id)a1;
- (id)initWithPaymentPass:(id)a0 forSelectSections:(id)a1;
- (id)_initWithPaymentPass:(id)a0 visibleSectionIdentifiers:(id)a1 renderUnclaimedFields:(BOOL)a2;
- (id)_infoCellWithPrimaryText:(id)a0 detailText:(id)a1 cellStyle:(long long)a2 forTableView:(id)a3;
- (BOOL)hasArbitraryInfoField:(id)a0;

@end
