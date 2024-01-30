@class NSArray, MPRadioController;

@interface MPRadioLibrary : NSObject {
    MPRadioController *_radioController;
}

@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) unsigned long long stationCount;
@property (readonly, nonatomic) NSArray *stations;

+ (id)defaultRadioLibrary;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_radioAvailabilityDidChangeNotification:(id)a0;
- (id)_radioModel;
- (void)_radioModelDidChangeNotification:(id)a0;
- (void)_radioRecentStationsDidChangeNotification:(id)a0;
- (void)getRecentStationGroupsWithCompletionHandler:(id /* block */)a0;
- (id)stationWithIdentifier:(long long)a0;

@end
