@class NSString, NSSet;

@interface RegisteredPreKey : NSManagedObject

@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) NSSet *senders;

+ (id)fetchRequest;

@end
