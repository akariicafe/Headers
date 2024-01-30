@class REMAccount;

@interface REMAccountTemplatesContext : NSObject

@property (retain, nonatomic) REMAccount *account;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (id)fetchTemplatesWithError:(id *)a0;

@end
