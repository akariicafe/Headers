@class PLPhotoLibrary, NSArray, NSDictionary, NSMutableDictionary, PLManagedAlbum, NSString, NSMutableArray;
@protocol PXVideoTrimQueueControllerDelegate;

@interface PXVideoTrimQueueController : NSObject {
    double _startTime;
    double _endTime;
    NSMutableArray *_sourcesToTransform;
    NSMutableArray *_trimQueue;
    struct { unsigned char hasWillTrim : 1; unsigned char hasDidTrim : 1; unsigned char hasDidFinish : 1; unsigned char hasDidCancel : 1; } _delegateFlags;
    PLPhotoLibrary *_photoLibrary;
}

@property (weak, nonatomic) id<PXVideoTrimQueueControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *videosSources;
@property (readonly, nonatomic) NSDictionary *videosSourcesSharingInfo;
@property (readonly, nonatomic) NSDictionary *customExportsInfo;
@property (readonly, nonatomic) NSMutableDictionary *trimmedVideoInfo;
@property (readonly, nonatomic) PLManagedAlbum *album;
@property (retain, nonatomic) NSString *albumName;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSString *commentText;

+ (BOOL)areVideoSourcesStreamShareSources:(id)a0;
+ (id)photoLibraryFromSources:(id)a0 album:(id)a1;
+ (id)videoInfoKeyForSource:(id)a0;
+ (double)durationFromVideoAtURL:(id)a0;

- (void)editVideoViewController:(id)a0 didTrimVideoWithOptions:(id)a1;
- (void)start;
- (id)initWithPhotoLibrary:(id)a0 videoSources:(id)a1 videoSourcesSharingInfo:(id)a2 customExportsInfo:(id)a3 album:(id)a4;
- (void).cxx_destruct;
- (void)_presentViewController:(id)a0;
- (void)editVideoViewControllerDidCancel:(id)a0;
- (void)_dismissViewControllerWithCompletion:(id /* block */)a0;
- (void)cleanupResources;
- (void)_showTrimViewControllerForSource:(id)a0;
- (id)alternateSourceToUseIfNeededFromSource:(id)a0;
- (BOOL)_shouldShowVideoTooLongAlertForVideoSource:(id)a0;
- (void)_dequeueTrimmingControl;
- (id)_videoTooLongAlertController;
- (void)_trimVideoSource:(id)a0;
- (void)_sendDidFinish;

@end
