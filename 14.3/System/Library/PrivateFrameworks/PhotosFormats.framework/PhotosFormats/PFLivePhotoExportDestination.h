@class NSURL;

@interface PFLivePhotoExportDestination : NSObject

@property (readonly) NSURL *photoURL;
@property (readonly) NSURL *videoURL;

+ (id)destinationWithPhotoURL:(id)a0 videoURL:(id)a1;

- (void).cxx_destruct;
- (id)initWithPhotoURL:(id)a0 videoURL:(id)a1;

@end
