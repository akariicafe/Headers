@class NSString, NSSet, CNDuplicateSetContactImage, CNDuplicateSetContactPoster;

@interface CNDuplicateSet : NSManagedObject

@property (nonatomic) BOOL isAvailable;
@property (nonatomic) BOOL isIgnored;
@property (nonatomic, copy) NSString *primaryID;
@property (nonatomic, copy) NSString *signature;
@property (nonatomic, retain) NSSet *cohorts;
@property (nonatomic, retain) CNDuplicateSetContactImage *selectedContactImage;
@property (nonatomic, retain) CNDuplicateSetContactPoster *selectedContactPoster;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
