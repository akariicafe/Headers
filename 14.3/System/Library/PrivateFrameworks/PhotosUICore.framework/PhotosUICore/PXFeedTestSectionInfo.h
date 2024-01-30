@class PLPhotoLibrary;

@interface PXFeedTestSectionInfo : PXFeedSectionInfo {
    PLPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) long long countOfItems;

- (id)initWithPhotoLibrary:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)photoLibrary;
- (id)date;
- (long long)sectionType;
- (id)albumTitle;
- (id)captionForItemAtIndex:(long long)a0;
- (BOOL)isLoaded;

@end
