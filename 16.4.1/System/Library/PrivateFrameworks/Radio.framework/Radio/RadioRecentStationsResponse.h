@class NSArray, NSDictionary;

@interface RadioRecentStationsResponse : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, copy, nonatomic) NSArray *stationDictionaries;
@property (readonly, copy, nonatomic) NSArray *stationGroups;

- (id)initWithResponseDictionary:(id)a0;
- (void).cxx_destruct;

@end
