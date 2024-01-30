@interface TNChartReferenceSeriesDescriptor : NSObject

@property (nonatomic) unsigned long long seriesIndex;
@property (nonatomic) BOOL onCategorizedTable;
@property (nonatomic) BOOL spanning;
@property (nonatomic) unsigned char categoryLevel;

- (id)init;

@end
