@class NSArray;

@interface SafariClearBrowsingDataController : NSObject

@property (readonly) NSArray *availableIntervals;

- (id)init;
- (void).cxx_destruct;
- (void)_clearBrowsingDataAddedAfterDate:(id)a0;
- (void)clearAllBrowsingData;
- (void)clearDataFromInterval:(id)a0;

@end
