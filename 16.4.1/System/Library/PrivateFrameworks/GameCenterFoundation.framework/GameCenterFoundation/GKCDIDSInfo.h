@class NSNumber, NSString, NSDate;

@interface GKCDIDSInfo : NSManagedObject

@property (copy, nonatomic) NSNumber *cohort;
@property (copy, nonatomic) NSString *contactAssociationID;
@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSDate *timeStamp;

+ (id)fetchRequest;

@end
