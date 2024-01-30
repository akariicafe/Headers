@class NSString, NSSet, NSData, NSDate, NSNumber;

@interface _DKCustomMetadataMO : NSManagedObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *event;
@property (copy, nonatomic) NSNumber *doubleValue;
@property (copy, nonatomic) NSNumber *integerValue;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSDate *dateValue;
@property (copy, nonatomic) NSData *binaryValue;
@property (copy, nonatomic) NSString *valueHash;

+ (id)fetchRequest;

@end
