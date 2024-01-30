@class NSArray, NSString;

@interface VMAccountsViewDataSource : NSObject <VMAccountsViewDataSource>

@property (copy, nonatomic) NSArray *accounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accountAtIndex:(unsigned long long)a0;
- (id)initWithAccounts:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)titleForAccountsView:(id)a0;
- (unsigned long long)numberOfRowsForAccountsView:(id)a0;
- (id)accountsView:(id)a0 buttonForRowAtIndex:(unsigned long long)a1;

@end
