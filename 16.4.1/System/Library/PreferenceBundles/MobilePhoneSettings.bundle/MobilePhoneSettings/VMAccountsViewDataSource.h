@class NSArray, NSString;

@interface VMAccountsViewDataSource : NSObject <VMAccountsViewDataSource>

@property (copy, nonatomic) NSArray *accounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccounts:(id)a0;
- (id)accountAtIndex:(unsigned long long)a0;
- (id)accountsView:(id)a0 buttonForRowAtIndex:(unsigned long long)a1;
- (unsigned long long)numberOfRowsForAccountsView:(id)a0;
- (id)titleForAccountsView:(id)a0;

@end
