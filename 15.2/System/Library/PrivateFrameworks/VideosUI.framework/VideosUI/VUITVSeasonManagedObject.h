@class NSString, NSSet, NSNumber, VUITVSeriesManagedObject;

@interface VUITVSeasonManagedObject : NSManagedObject

@property (copy, nonatomic) NSString *canonicalID;
@property (copy, nonatomic) NSNumber *seasonNumber;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSSet *episodes;
@property (retain, nonatomic) VUITVSeriesManagedObject *series;

+ (id)fetchRequest;

@end
