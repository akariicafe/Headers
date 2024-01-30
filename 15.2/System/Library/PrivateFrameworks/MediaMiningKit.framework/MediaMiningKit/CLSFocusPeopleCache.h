@class PHPhotoLibrary, NSSet;

@interface CLSFocusPeopleCache : NSObject

@property (weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) unsigned long long maximumNumberOfPeople;
@property (readonly, nonatomic) NSSet *personLocalIdentifiers;

+ (id)_personSortDescriptors;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithPhotoLibrary:(id)a0 maximumNumberOfPeople:(unsigned long long)a1;
- (id)_collectValidPersonLocalIdentifiers;

@end
