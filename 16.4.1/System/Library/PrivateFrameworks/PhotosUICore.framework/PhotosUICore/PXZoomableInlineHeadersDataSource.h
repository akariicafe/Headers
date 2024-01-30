@class PXAssetsDataSource;

@interface PXZoomableInlineHeadersDataSource : PXSectionedDataSource

@property (readonly, nonatomic) unsigned long long level;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) struct { long long x0; long long x1; long long x2; double x3; } *sectionInfos;
@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource;

- (id)initWithAssetsDataSource:(id)a0 level:(unsigned long long)a1 metaDataStore:(id)a2;
- (void)dealloc;
- (void).cxx_destruct;

@end
