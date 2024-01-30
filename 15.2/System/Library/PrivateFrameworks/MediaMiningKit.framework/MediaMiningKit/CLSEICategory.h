@class NSString, NSSet;

@interface CLSEICategory : NSManagedObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSSet *subCategories;
@property (retain, nonatomic) CLSEICategory *parentCategory;
@property (retain, nonatomic) NSSet *events;

@end
