@class NSArray, CLLocation, NSDate, PGManager;

@interface PGFeatureVectorGenerator : NSObject

@property BOOL isDryTesting;
@property (retain, nonatomic) NSDate *localDate;
@property (retain, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSArray *peopleNames;
@property (readonly, weak) PGManager *manager;

+ (id)_calendarEventsBetweenDate:(id)a0 andDate:(id)a1 atLocation:(id)a2 withPeopleUUIDs:(id)a3 inPhotoLibrary:(id)a4;

- (id)initWithManager:(id)a0;
- (void).cxx_destruct;
- (void)enumerateFeatureVectorsByTypeUsingBlock:(id /* block */)a0;

@end
