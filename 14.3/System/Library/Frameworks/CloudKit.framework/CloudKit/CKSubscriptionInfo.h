@class CKContainer, CKSubscription, CKDatabase;

@interface CKSubscriptionInfo : NSObject

@property (retain, nonatomic) CKSubscription *subscription;
@property (retain, nonatomic) CKDatabase *database;
@property (retain, nonatomic) CKContainer *container;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
