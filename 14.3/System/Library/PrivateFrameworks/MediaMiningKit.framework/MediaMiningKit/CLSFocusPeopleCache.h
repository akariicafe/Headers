@class PHPhotoLibrary, NSSet;

@interface CLSFocusPeopleCache : NSObject

@property (weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) unsigned long long maximumNumberOfPeople;
@property (readonly, nonatomic) NSSet *peopleUUIDs;

+ (id)_personSortDescriptors;

- (void).cxx_destruct;
- (id)_collectValidPeopleUUIDs;
- (id)initWithPhotoLibrary:(id)a0 maximumNumberOfPeople:(unsigned long long)a1;
- (void)invalidate;

@end
