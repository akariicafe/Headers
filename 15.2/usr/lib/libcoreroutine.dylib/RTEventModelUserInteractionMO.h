@class NSString, NSNumber, NSDate;

@interface RTEventModelUserInteractionMO : NSManagedObject

@property (copy, nonatomic) NSString *feedback;
@property (retain, nonatomic) NSNumber *interaction;
@property (copy, nonatomic) NSString *locationOfInterestIdentifier;
@property (copy, nonatomic) NSDate *date;

+ (id)managedObjectWithFeedback:(id)a0 interaction:(id)a1 locationOfInterestIdentifier:(id)a2 date:(id)a3 inManagedObjectContext:(id)a4;

@end
