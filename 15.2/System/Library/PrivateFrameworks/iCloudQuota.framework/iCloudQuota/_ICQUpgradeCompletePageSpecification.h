@class NSString, ICQLink;

@interface _ICQUpgradeCompletePageSpecification : _ICQPageSpecification

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) ICQLink *doneLink;

+ (id)upgradeCompletePageSpecificationSampleForLevel:(long long)a0;

- (id)pageIdentifier;
- (void).cxx_destruct;
- (BOOL)hasCancelButtonForBack;

@end
