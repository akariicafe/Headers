@class CKContainer, NSString, CKDatabase;

@interface CKSubscriptionInfo : NSObject {
    CKDatabase *_database;
    CKContainer *_container;
    id /* block */ _idHandler;
    NSString *_subscriptionID;
}

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
