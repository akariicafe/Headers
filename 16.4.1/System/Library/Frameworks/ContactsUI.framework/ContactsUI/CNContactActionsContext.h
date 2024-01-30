@class CNUIContactsEnvironment, CNUIUserActionListDataSource;

@interface CNContactActionsContext : NSObject

@property (readonly) CNUIUserActionListDataSource *dataSource;
@property (readonly) CNUIContactsEnvironment *environment;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 environment:(id)a1;
- (void)setCacheEntryExpirationAge:(double)a0;
- (void)setCacheEntryLimit:(unsigned long long)a0;
- (void)setCacheEntryRefreshAge:(double)a0;

@end
