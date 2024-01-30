@class NSString, PKPaymentSetupProductCategory;

@interface PKPaymentSetupCategoriesListItem : PKPaymentSetupListItem <NSCopying>

@property (retain, nonatomic) PKPaymentSetupProductCategory *category;
@property (nonatomic) unsigned long long isLoadingIcon;
@property (retain, nonatomic) NSString *sectionIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
