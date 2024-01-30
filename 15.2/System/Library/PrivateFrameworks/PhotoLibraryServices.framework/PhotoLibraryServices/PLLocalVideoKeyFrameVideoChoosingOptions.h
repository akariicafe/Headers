@class NSString;

@interface PLLocalVideoKeyFrameVideoChoosingOptions : NSObject <PLVideoChoosingOptions> {
    BOOL _streamingAllowed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)restrictToPlayableOnCurrentDevice;
- (long long)videoVersion;
- (BOOL)isExplicitUserAction;
- (id)initWithStreamingAllowed:(BOOL)a0;
- (BOOL)isStreamingAllowed;
- (BOOL)isMediumHighQualityAllowed;
- (BOOL)hasValidTimeRange;
- (long long)videoDeliveryMode;
- (BOOL)isNetworkAccessAllowed;

@end
