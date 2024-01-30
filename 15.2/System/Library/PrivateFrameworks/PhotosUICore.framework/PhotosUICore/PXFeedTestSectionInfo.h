@class PLPhotoLibrary;

@interface PXFeedTestSectionInfo : PXFeedSectionInfo {
    PLPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) long long countOfItems;

- (long long)numberOfItems;
- (long long)sectionType;
- (BOOL)isLoaded;
- (id)albumTitle;
- (id)photoLibrary;
- (id)captionForItemAtIndex:(long long)a0;
- (id)date;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;

@end
