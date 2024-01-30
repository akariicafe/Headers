@class NSString, NSNumber, RTEventLocationIdentifierMO;

@interface RTLOIHistogramItemMO : NSManagedObject

@property (retain, nonatomic) NSString *locationOfInterestIdentifier;
@property (retain, nonatomic) NSNumber *timeOfStay;
@property (retain, nonatomic) NSNumber *probability;
@property (retain, nonatomic) NSNumber *numOfEvents;
@property (retain, nonatomic) RTEventLocationIdentifierMO *eventLocationIdentifier;

+ (id)managedObjectWithLOIHistogramItem:(id)a0 inManagedObjectContext:(id)a1;

@end
