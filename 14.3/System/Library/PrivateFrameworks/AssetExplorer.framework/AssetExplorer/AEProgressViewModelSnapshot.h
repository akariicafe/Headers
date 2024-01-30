@class NSDictionary, PXIndexPathSet;

@interface AEProgressViewModelSnapshot : NSObject

@property (readonly, nonatomic) NSDictionary *_progressByIndexPath;
@property (readonly, nonatomic) PXIndexPathSet *_pathsWithProgress;
@property (readonly, nonatomic) unsigned long long correspondingDataSourceIdentifier;

- (void).cxx_destruct;
- (id)progressForIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)initWithProgressByIndexPath:(id)a0 dataSourceIdenfitier:(unsigned long long)a1;
- (BOOL)hasProgressForIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;

@end
