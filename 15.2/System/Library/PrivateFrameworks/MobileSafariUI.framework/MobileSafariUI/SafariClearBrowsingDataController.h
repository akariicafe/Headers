@class NSArray;

@interface SafariClearBrowsingDataController : NSObject

@property (readonly) NSArray *availableIntervals;

- (void).cxx_destruct;
- (id)init;
- (void)clearAllBrowsingData;
- (void)clearDataFromInterval:(id)a0;
- (void)_clearBrowsingDataAddedAfterDate:(id)a0;

@end
