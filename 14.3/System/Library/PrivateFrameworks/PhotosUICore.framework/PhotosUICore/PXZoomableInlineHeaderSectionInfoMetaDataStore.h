@class PXAssetsDataSource;

@interface PXZoomableInlineHeaderSectionInfoMetaDataStore : NSObject {
    struct *_sectionInfosByLevel[2];
    long long _sectionsCountByLevel[2];
    long long _sectionsCapacityByLevel[2];
}

@property (readonly, nonatomic) PXAssetsDataSource *dataSource;

- (id)initWithDataSource:(id)a0;
- (void)resetSectionInfos;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addSectionInfo:(struct { long long x0; long long x1; long long x2; double x3; })a0 forLevel:(unsigned long long)a1;
- (const struct { long long x0; long long x1; long long x2; double x3; } *)sectionInfosForLevel:(unsigned long long)a0;
- (id)description;
- (BOOL)updateWithDataSourceAfterChanges:(id)a0 changeDetails:(id)a1;
- (long long)numberOfSectionInfosForLevel:(unsigned long long)a0;
- (void)_resizeStorageIfNeededForNumberOfSections:(long long)a0 level:(unsigned long long)a1;

@end
