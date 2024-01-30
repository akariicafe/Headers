@class NSArray, MPRadioController;

@interface MPRadioLibrary : NSObject {
    MPRadioController *_radioController;
}

@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) unsigned long long stationCount;
@property (readonly, nonatomic) NSArray *stations;

+ (id)defaultRadioLibrary;

- (void)getRecentStationGroupsWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_radioModel;
- (id)stationWithIdentifier:(long long)a0;
- (void)_radioModelDidChangeNotification:(id)a0;
- (void)addStationBasedOnTrackIDs:(id)a0 completion:(id /* block */)a1;
- (void)_radioAvailabilityDidChangeNotification:(id)a0;
- (void)_radioRecentStationsDidChangeNotification:(id)a0;
- (void)dealloc;

@end
