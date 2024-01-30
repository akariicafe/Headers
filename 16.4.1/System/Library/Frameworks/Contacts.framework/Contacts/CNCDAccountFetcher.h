@class NSPredicate, CNCDPersistenceContext;

@interface CNCDAccountFetcher : NSObject

@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) CNCDPersistenceContext *persistenceContext;

+ (id)accountsForPredicate:(id)a0 inPersistenceStack:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)fetchAccounts:(id *)a0;
- (id)initWithPredicate:(id)a0 persistenceContext:(id)a1;

@end
