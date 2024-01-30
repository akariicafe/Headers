@class PHFetchResult;

@interface PXSharedLibraryPhotoKitDataSource : PXSharedLibraryDataSource {
    PHFetchResult *_fetchResult;
}

- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)sharedLibraryAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)dataSourceUpdatedWithChange:(id)a0 changeDetails:(id *)a1;
- (id)initWithFetchResult:(id)a0;
- (void).cxx_destruct;

@end
