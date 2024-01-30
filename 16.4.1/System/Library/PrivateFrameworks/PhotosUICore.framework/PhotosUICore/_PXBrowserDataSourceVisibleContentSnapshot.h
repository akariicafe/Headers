@class NSArray;
@protocol PXDisplayAssetDataSource;

@interface _PXBrowserDataSourceVisibleContentSnapshot : PXBrowserVisibleContentSnapshot

@property (readonly, copy, nonatomic) NSArray *indexPaths;
@property (readonly, nonatomic) id<PXDisplayAssetDataSource> dataSource;
@property (readonly, nonatomic) unsigned long long dateType;

- (id)dateInterval;
- (void).cxx_destruct;
- (id)initWithIndexPaths:(id)a0 dataSource:(id)a1 dateIntervalGranularity:(unsigned long long)a2 dateType:(unsigned long long)a3;
- (id)initWithDateIntervalGranularity:(unsigned long long)a0;

@end
