@class REMAccount;

@interface REMAccountGroupContext : NSObject

@property (retain, nonatomic) REMAccount *account;

- (void).cxx_destruct;
- (id)fetchGroupsWithError:(id *)a0;
- (id)initWithAccount:(id)a0;

@end
