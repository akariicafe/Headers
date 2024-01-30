@class RTMapItemMO, NSUUID, NSString, NSSet, NSDate, NSNumber, NSOrderedSet;

@interface RTLearnedLocationOfInterestMO : NSManagedObject

@property (copy, nonatomic) NSNumber *confidence;
@property (copy, nonatomic) NSNumber *dataPointCount;
@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSNumber *locationLatitude;
@property (copy, nonatomic) NSNumber *locationLongitude;
@property (copy, nonatomic) NSNumber *locationReferenceFrame;
@property (copy, nonatomic) NSNumber *locationHorizontalUncertainty;
@property (copy, nonatomic) NSNumber *locationAltitude;
@property (copy, nonatomic) NSNumber *locationVerticalUncertainty;
@property (copy, nonatomic) NSString *placeCustomLabel;
@property (retain, nonatomic) NSUUID *placeIdentifier;
@property (retain, nonatomic) NSUUID *placeMapItemIdentifier;
@property (copy, nonatomic) NSNumber *placeType;
@property (copy, nonatomic) NSNumber *placeTypeSource;
@property (copy, nonatomic) NSDate *placeExpirationDate;
@property (copy, nonatomic) NSDate *placeCreationDate;
@property (retain, nonatomic) NSSet *transitions;
@property (retain, nonatomic) NSOrderedSet *visits;
@property (retain, nonatomic) RTMapItemMO *cachedMapItem;

+ (id)managedObjectWithLocationOfInterest:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;
+ (id)fetchRequest;
+ (id)managedObjectWithLocationOfInterest:(id)a0 inManagedObjectContext:(id)a1;
+ (id)fetchRequestSortedByCreation;

- (void).cxx_destruct;
- (id)mapItem;
- (void)setMapItem:(id)a0;
- (void)updateWithLearnedLocation:(id)a0;

@end
