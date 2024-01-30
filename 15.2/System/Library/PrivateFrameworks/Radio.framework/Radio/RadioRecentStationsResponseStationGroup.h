@class NSString, NSArray, NSDictionary;

@interface RadioRecentStationsResponseStationGroup : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSArray *stationDictionaries;

- (id)initWithResponseDictionary:(id)a0;
- (void).cxx_destruct;

@end
