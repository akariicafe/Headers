@class PLPhotoLibrary;

@interface PXFeedTestSectionInfo : PXFeedSectionInfo {
    PLPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) long long countOfItems;

- (id)initWithPhotoLibrary:(id)a0;
- (long long)numberOfItems;
- (id)photoLibrary;
- (long long)sectionType;
- (BOOL)isLoaded;
- (id)date;
- (void).cxx_destruct;
- (id)albumTitle;
- (id)captionForItemAtIndex:(long long)a0;

@end
