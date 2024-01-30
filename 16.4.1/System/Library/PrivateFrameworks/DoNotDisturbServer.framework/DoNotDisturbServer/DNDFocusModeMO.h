@class NSString, NSSet;

@interface DNDFocusModeMO : NSManagedObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSSet *settings;

+ (id)fetchRequest;

@end
