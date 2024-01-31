@class NSArray, NSString, NSPersistentStoreRequest;

@interface CNContactPosterSaveRequest : NSObject <CNContactPosterRequest>

@property (readonly, nonatomic) NSArray *posters;
@property (readonly, nonatomic) long long operationType;
@property (readonly, nonatomic) NSString *attributeName;
@property (readonly, nonatomic) NSPersistentStoreRequest *persistentStoreRequest;
@property (retain, nonatomic) NSArray *contactIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)saveRequestToCreatePoster:(id)a0 forContactIdentifier:(id)a1;
+ (id)saveRequestToDeletePosterForIdentifiers:(id)a0;
+ (id)saveRequestToDeletePostersForContactIdentifiers:(id)a0;
+ (id)saveRequestToCreatePosters:(id)a0 forContactIdentifier:(id)a1;
+ (id)saveRequestToDeletePosterForIdentifier:(id)a0;

@end
