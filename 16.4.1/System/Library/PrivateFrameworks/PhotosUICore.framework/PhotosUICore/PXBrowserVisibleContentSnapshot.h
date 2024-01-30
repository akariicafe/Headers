@class NSArray, NSString, NSDateInterval;

@interface PXBrowserVisibleContentSnapshot : NSObject <PXBrowserVisibleContentSnapshot>

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSArray *locationNames;
@property (readonly, nonatomic) unsigned long long dateIntervalGranularity;
@property (readonly, nonatomic) NSString *localizedPlaceholderText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)snapshotWithIndexPaths:(id)a0 dataSource:(id)a1 dateIntervalGranularity:(unsigned long long)a2;
+ (id)snapshotWithIndexPaths:(id)a0 dataSource:(id)a1 dateIntervalGranularity:(unsigned long long)a2 dateType:(unsigned long long)a3;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDateIntervalGranularity:(unsigned long long)a0;

@end
