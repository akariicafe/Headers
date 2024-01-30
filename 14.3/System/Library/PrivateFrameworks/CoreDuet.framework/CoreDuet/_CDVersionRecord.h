@class NSString;

@interface _CDVersionRecord : NSManagedObject

@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) long long number;

@end
