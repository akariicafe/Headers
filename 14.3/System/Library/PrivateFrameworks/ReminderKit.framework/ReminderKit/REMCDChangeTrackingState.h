@class NSString, NSData, NSDate;

@interface REMCDChangeTrackingState : NSManagedObject

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSData *lastConsumedChangeTokenData;
@property (copy, nonatomic) NSDate *lastConsumedDate;

+ (id)fetchRequest;

@end
