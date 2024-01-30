@class VUITVSeriesManagedObject;

@interface VUITVSeriesImageInfoManagedObject : VUIImageInfoManagedObject

@property (retain, nonatomic) VUITVSeriesManagedObject *series;

+ (id)fetchRequest;

@end
