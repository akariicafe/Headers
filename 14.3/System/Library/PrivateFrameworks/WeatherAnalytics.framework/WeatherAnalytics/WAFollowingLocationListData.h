@class NSString, NSArray;

@interface WAFollowingLocationListData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSArray *locations;

- (id)toDict;
- (void).cxx_destruct;
- (id)initWithLocations:(id)a0;

@end
