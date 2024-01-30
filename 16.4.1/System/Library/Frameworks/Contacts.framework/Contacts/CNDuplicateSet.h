@class NSString, NSSet, CNDuplicateSetContactImage;

@interface CNDuplicateSet : NSManagedObject

@property (nonatomic) BOOL isAvailable;
@property (nonatomic) BOOL isIgnored;
@property (nonatomic, copy) NSString *primaryID;
@property (nonatomic, copy) NSString *signature;
@property (nonatomic, retain) NSSet *cohorts;
@property (nonatomic, retain) CNDuplicateSetContactImage *selectedContactImage;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
