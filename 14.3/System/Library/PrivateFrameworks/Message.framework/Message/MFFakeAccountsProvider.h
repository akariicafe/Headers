@class NSArray, NSSet, NSString;

@interface MFFakeAccountsProvider : NSObject <MFAccountsProvider, EDAccountsProvider>

@property (copy, nonatomic) NSArray *mailAccounts;
@property (copy, nonatomic) NSArray *orderedAccounts;
@property (copy, nonatomic) NSSet *displayedAccounts;
@property (copy, nonatomic) NSSet *autofetchAccounts;
@property (readonly, nonatomic, getter=isDisplayingMultipleAccounts) BOOL displayingMultipleAccounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *receivingAddresses;

- (void).cxx_destruct;

@end
