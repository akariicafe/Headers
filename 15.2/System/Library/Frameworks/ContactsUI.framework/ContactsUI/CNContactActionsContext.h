@class CNUIContactsEnvironment, CNUIUserActionListDataSource;

@interface CNContactActionsContext : NSObject

@property (readonly) CNUIUserActionListDataSource *dataSource;
@property (readonly) CNUIContactsEnvironment *environment;

- (void)setCacheEntryLimit:(unsigned long long)a0;
- (id)initWithDataSource:(id)a0 environment:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)setCacheEntryExpirationAge:(double)a0;
- (void)setCacheEntryRefreshAge:(double)a0;

@end
