@class NSString, NSDate;

@interface SendingDestination : NSManagedObject

@property (copy, nonatomic) NSString *destinationHash;
@property (copy, nonatomic) NSDate *registrationDate;
@property (nonatomic) int validOutgoingCounter;

+ (id)fetchRequest;

@end
