@class CNUIContactsEnvironment, CNUIUserActionListDataSource;

@interface CNContactActionsContext : NSObject

@property (readonly) CNUIUserActionListDataSource *dataSource;
@property (readonly) CNUIContactsEnvironment *environment;

- (id)init;
- (void).cxx_destruct;
- (void)setCacheEntryRefreshAge:(double)a0;
- (void)setCacheEntryExpirationAge:(double)a0;
- (void)setCacheEntryLimit:(unsigned long long)a0;
- (id)initWithDataSource:(id)a0 environment:(id)a1;
- (id)description;

@end
