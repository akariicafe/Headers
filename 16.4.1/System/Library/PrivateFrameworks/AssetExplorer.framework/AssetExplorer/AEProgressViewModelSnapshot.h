@class NSDictionary, PXIndexPathSet;

@interface AEProgressViewModelSnapshot : NSObject

@property (readonly, nonatomic) NSDictionary *_progressByIndexPath;
@property (readonly, nonatomic) PXIndexPathSet *_pathsWithProgress;
@property (readonly, nonatomic) long long correspondingDataSourceIdentifier;

- (void).cxx_destruct;
- (id)progressForIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (BOOL)hasProgressForIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)initWithProgressByIndexPath:(id)a0 dataSourceIdenfitier:(long long)a1;

@end
