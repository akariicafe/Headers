@class PHPhotoLibrary, NSString;

@interface WFSharedPhotoLibrary : NSObject <PHPhotoLibraryAvailabilityObserver>

@property (retain, nonatomic) PHPhotoLibrary *systemPhotoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedLibrary;

@end
