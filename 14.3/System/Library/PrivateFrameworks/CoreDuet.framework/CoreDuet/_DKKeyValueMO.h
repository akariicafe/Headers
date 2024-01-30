@class NSString, NSObject;

@interface _DKKeyValueMO : NSManagedObject

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSObject *value;

+ (id)fetchRequest;

@end
