@class NSString;

@interface PLLocalVideoKeyFrameVideoChoosingOptions : NSObject <PLVideoChoosingOptions>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isNetworkAccessAllowed;
- (long long)videoVersion;
- (BOOL)restrictToPlayableOnCurrentDevice;
- (long long)videoDeliveryMode;
- (BOOL)isMediumHighQualityAllowed;
- (BOOL)isStreamingAllowed;

@end
