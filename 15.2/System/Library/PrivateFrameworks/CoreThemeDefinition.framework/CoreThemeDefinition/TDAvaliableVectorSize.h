@class NSNumber;

@interface TDAvaliableVectorSize : NSManagedObject

@property (copy, nonatomic) NSNumber *pointSize;

+ (id)fetchRequest;

@end
