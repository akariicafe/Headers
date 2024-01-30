@class CNAutocompleteAggdProbe, NSMutableDictionary, NSString;

@interface CNAutocompleteAggdPerformanceProbe : NSObject <CNAutocompletePerformanceProbe>

@property (retain, nonatomic) CNAutocompleteAggdProbe *aggdProbe;
@property (readonly, nonatomic) NSMutableDictionary *pendingAddData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)sendData;
- (void)recordNumberOfContactResults:(unsigned long long)a0 inTimeInterval:(double)a1;
- (void)recordNumberOfRecentResults:(unsigned long long)a0 inTimeInterval:(double)a1;
- (void)recordNumberOfSuggestionResults:(unsigned long long)a0 inTimeInterval:(double)a1;
- (void)recordNumberOfPredictionResults:(unsigned long long)a0 inTimeInterval:(double)a1;
- (void)recordNumberOfSupplementalResults:(unsigned long long)a0 inTimeInterval:(double)a1;
- (void)recordNumberOfDirectoryServerResults:(unsigned long long)a0 inTimeInterval:(double)a1;
- (void)recordNumberOfCalendarServerResults:(unsigned long long)a0 inTimeInterval:(double)a1;
- (id)initWithAggdProbe:(id)a0;
- (void)recordLatency:(double)a0 forResultCount:(unsigned long long)a1 forSource:(id)a2;
- (void)recordNumberOfResultsReturned:(unsigned long long)a0 inTimeInterval:(double)a1 forBatch:(unsigned long long)a2 includesServers:(BOOL)a3;

@end
