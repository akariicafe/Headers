@class AVPlayerItemVideoOutputInternal, NSObject;
@protocol OS_dispatch_queue, AVPlayerItemOutputPullDelegate;

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput {
    AVPlayerItemVideoOutputInternal *_videoOutputInternal;
}

@property (readonly, weak) id<AVPlayerItemOutputPullDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (id)init;
- (void)_setTimebase:(struct OpaqueCMTimebase { } *)a0;
- (BOOL)suppressesPlayerRendering;
- (void)dealloc;
- (struct OpaqueFigVisualContext { } *)_visualContext;
- (id)_pixelBufferAttributes;
- (BOOL)_attachToPlayerItem:(id)a0;
- (void)_detachFromPlayerItem;
- (id)initWithPixelBufferAttributes:(id)a0;
- (BOOL)setUpWithOutputSettings:(id)a0 outputSettingsArePixelBufferAttributes:(BOOL)a1 withExceptionReason:(id *)a2;
- (struct __CVBuffer { } *)_copyPixelBufferForItemTimeWithOptions:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 itemTimeForDisplay:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 options:(unsigned int)a2;
- (void)_dispatchOutputSequenceWasFlushed;
- (void)setSuppressesPlayerRendering:(BOOL)a0;
- (long long)clientStateOnRequestedMediaDataChangeNotification;
- (void)_dispatchOutputMediaDataWillChange;
- (BOOL)hasNewPixelBufferForItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_respondToPlayerItemFormatDescriptionsChange;
- (void)_stopObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase { } *)a0;
- (void)_startObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase { } *)a0;
- (id)initWithOutputSettings:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })earliestAvailablePixelBufferItemTime;
- (void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(double)a0;
- (void)requestNotificationOfMediaDataChangeAsSoonAsPossible;
- (struct __CVBuffer { } *)copyPixelBufferForItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 itemTimeForDisplay:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1;
- (struct __CVBuffer { } *)copyPixelBufferForItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 remove:(BOOL)a1 itemTimeForDisplay:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2;
- (void)_setTagBuffersWithConversionInformation;

@end
