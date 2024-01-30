@class NSString, ManagedCatalogPreview, NSSet;

@interface ManagedTrainerMetadata : NSManagedObject

@property (nonatomic, copy) NSString *bio;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *informalName;
@property (nonatomic, copy) NSString *sharingURL;
@property (nonatomic, retain) ManagedCatalogPreview *preview;
@property (nonatomic, retain) NSSet *socialMediaHandles;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
