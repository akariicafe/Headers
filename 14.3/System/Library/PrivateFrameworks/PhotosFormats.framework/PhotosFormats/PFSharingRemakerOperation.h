@class NSString, PFPhotoSharingOperation, NSURL, PFVideoSharingOperation;

@interface PFSharingRemakerOperation : NSObject

@property (copy, nonatomic, setter=_setUUID:) NSString *_uuid;
@property (nonatomic, setter=_setInputType:) long long inputType;
@property (retain, nonatomic, setter=_setVideoOperation:) PFVideoSharingOperation *_videoOperation;
@property (retain, nonatomic, setter=_setImageOperation:) PFPhotoSharingOperation *_imageOperation;
@property (copy, nonatomic, setter=_setImageOutputURL:) NSURL *imageOutputURL;
@property (copy, nonatomic, setter=_setVideoOutputURL:) NSURL *videoOutputURL;

+ (id)remakerOperationWithInputType:(long long)a0 videoURL:(id)a1 imageURL:(id)a2 adjustmentData:(id)a3;

- (id)init;
- (void).cxx_destruct;

@end
