@class NSString, APOdmlVector, NSDate;

@interface Feature : NSManagedObject

@property (copy, nonatomic) NSDate *createdAt;
@property (nonatomic) int deploymentID;
@property (copy, nonatomic) NSString *experimentID;
@property (copy, nonatomic) NSString *featureType;
@property (copy, nonatomic) NSString *treatmentID;
@property (retain, nonatomic) APOdmlVector *value;

+ (id)fetchRequest;

@end
