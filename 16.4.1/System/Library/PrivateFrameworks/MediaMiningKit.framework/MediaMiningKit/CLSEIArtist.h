@class NSString, NSSet;

@interface CLSEIArtist : NSManagedObject

@property (nonatomic) long long uuid;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSSet *events;

@end
