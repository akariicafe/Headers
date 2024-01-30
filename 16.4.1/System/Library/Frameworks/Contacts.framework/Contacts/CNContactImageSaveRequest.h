@class NSArray, NSString, NSPersistentStoreRequest;

@interface CNContactImageSaveRequest : NSObject <CNContactImageRequest>

@property (readonly, nonatomic) NSArray *images;
@property (readonly, nonatomic) long long operationType;
@property (readonly, nonatomic) NSString *attributeName;
@property (readonly, nonatomic) NSPersistentStoreRequest *persistentStoreRequest;
@property (retain, nonatomic) NSArray *contactIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)saveRequestToCreateImage:(id)a0 forContactIdentifier:(id)a1;
+ (id)saveRequestToDeleteImageForIdentifier:(id)a0;
+ (id)saveRequestToDeleteImagesForContactIdentifiers:(id)a0;
+ (id)saveRequestToCreateImages:(id)a0 forContactIdentifier:(id)a1;

@end
