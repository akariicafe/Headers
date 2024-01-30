@class NSString, NSNumber;

@interface MAModelProperty : NSManagedObject

@property (nonatomic) int identifier;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSNumber *value_integer;
@property (copy, nonatomic) NSNumber *value_double;
@property (copy, nonatomic) NSString *value_string;

@end
