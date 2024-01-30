@class NSString, NSArray, CNContactImage, NSPersistentStoreRequest;

@interface CNContactImageSaveRequest : NSObject <CNContactImageRequest>

@property (readonly, nonatomic) CNContactImage *image;
@property (readonly, nonatomic) long long operationType;
@property (readonly, nonatomic) NSString *attributeName;
@property (readonly, nonatomic) NSPersistentStoreRequest *persistentStoreRequest;
@property (retain, nonatomic) NSArray *contactIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)saveRequestToDeleteImagesForContactIdentifiers:(id)a0;
+ (id)saveRequestToCreateImage:(id)a0 forContactIdentifier:(id)a1;
+ (id)saveRequestToDeleteImageForIdentifier:(id)a0;

@end
