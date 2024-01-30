@class NSNumber, NSString, _DKHistogramMO;

@interface _DKHistogramValueMO : NSManagedObject

@property (copy, nonatomic) NSNumber *integerValue;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSNumber *count;
@property (retain, nonatomic) _DKHistogramMO *histogram;

+ (id)fetchRequest;

@end
