@class NSString, NSSet;

@interface ACDManagedAccessOptionsKey : NSManagedObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *owningAccountTypes;

@end
