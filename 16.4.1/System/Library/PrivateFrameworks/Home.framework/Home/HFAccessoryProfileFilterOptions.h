@class NSSet;

@interface HFAccessoryProfileFilterOptions : NSObject

@property (copy, nonatomic) NSSet *byAccessories;
@property (copy, nonatomic) NSSet *byCategoryTypes;
@property (copy, nonatomic) NSSet *byClasses;
@property (nonatomic) BOOL byFavorites;
@property (copy, nonatomic) NSSet *byManufacturers;
@property (copy, nonatomic) NSSet *byModels;
@property (copy, nonatomic) NSSet *byRooms;
@property (copy, nonatomic) id /* block */ byFilter;

- (void).cxx_destruct;

@end
