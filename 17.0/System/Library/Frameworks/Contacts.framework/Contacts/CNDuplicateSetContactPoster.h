@class NSData, CNDuplicateSet;

@interface CNDuplicateSetContactPoster : NSManagedObject

@property (nonatomic, copy) NSData *posterData;
@property (nonatomic, retain) CNDuplicateSet *duplicateSet;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
