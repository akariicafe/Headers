@class NSString;

@interface BWCaptureDeferredPhotoProcessor : NSObject <FigCaptureDeferredProcessingJobDelegate> {
    struct OpaqueFigCaptureDeferredPhotoProcessor { } *_deferredPhotoProcessor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
