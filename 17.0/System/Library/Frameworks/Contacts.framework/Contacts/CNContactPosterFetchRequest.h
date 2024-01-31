@class NSArray, NSString, NSPersistentStoreRequest;

@interface CNContactPosterFetchRequest : NSObject <CNContactPosterRequest>

@property (readonly, nonatomic) NSPersistentStoreRequest *persistentStoreRequest;
@property (retain, nonatomic) NSArray *contactIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recentPostersRequestForContactIdenfitiers:(id)a0;
+ (id)predicateForPostersMatchingContactIdentifiers:(id)a0;

- (void).cxx_destruct;
- (id)initWithContactIdentifiers:(id)a0;

@end
