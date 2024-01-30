@class NSArray, MPRadioController;

@interface MPRadioLibrary : NSObject {
    MPRadioController *_radioController;
}

@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) unsigned long long stationCount;
@property (readonly, nonatomic) NSArray *stations;

+ (id)defaultRadioLibrary;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)stationWithIdentifier:(long long)a0;
- (void)addStationBasedOnTrackIDs:(id)a0 completion:(id /* block */)a1;
- (void)_radioAvailabilityDidChangeNotification:(id)a0;
- (id)_radioModel;
- (void)_radioRecentStationsDidChangeNotification:(id)a0;
- (void)_radioModelDidChangeNotification:(id)a0;
- (void)getRecentStationGroupsWithCompletionHandler:(id /* block */)a0;

@end
