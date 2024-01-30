@class NSString, PKPaymentSetupProductCategory;

@interface PKPaymentSetupCategoriesListItem : PKPaymentSetupListItem <NSCopying>

@property (retain, nonatomic) PKPaymentSetupProductCategory *category;
@property (nonatomic) unsigned long long isLoadingIcon;
@property (retain, nonatomic) NSString *sectionIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
