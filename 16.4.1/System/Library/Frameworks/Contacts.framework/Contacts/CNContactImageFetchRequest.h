@class NSArray, NSString, NSPersistentStoreRequest;

@interface CNContactImageFetchRequest : NSObject <CNContactImageRequest>

@property (readonly, nonatomic) NSPersistentStoreRequest *persistentStoreRequest;
@property (retain, nonatomic) NSArray *contactIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recentImagesRequestForContactIdenfitiers:(id)a0;
+ (id)predicateForImagesMatchingContactIdentifiers:(id)a0;

- (void).cxx_destruct;
- (id)initWithContactIdentifiers:(id)a0;

@end
