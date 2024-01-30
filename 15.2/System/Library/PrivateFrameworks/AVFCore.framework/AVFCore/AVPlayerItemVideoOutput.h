@class AVPlayerItemVideoOutputInternal, NSObject;
@protocol OS_dispatch_queue, AVPlayerItemOutputPullDelegate;

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput {
    AVPlayerItemVideoOutputInternal *_videoOutputInternal;
}

@property (readonly, weak) id<AVPlayerItemOutputPullDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;

- (id)initWithPixelBufferAttributes:(id)a0;
- (struct __CVBuffer { } *)_copyPixelBufferForItemTimeWithOptions:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 itemTimeForDisplay:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 options:(unsigned int)a2;
- (BOOL)setUpWithOutputSettings:(id)a0 outputSettingsArePixelBufferAttributes:(BOOL)a1 withExceptionReason:(id *)a2;
- (void)_dispatchOutputSequenceWasFlushed;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)setSuppressesPlayerRendering:(BOOL)a0;
- (long long)clientStateOnRequestedMediaDataChangeNotification;
- (void)_dispatchOutputMediaDataWillChange;
- (void)_respondToPlayerItemFormatDescriptionsChange;
- (BOOL)hasNewPixelBufferForItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_stopObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase { } *)a0;
- (void)_startObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase { } *)a0;
- (id)initWithOutputSettings:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })earliestAvailablePixelBufferItemTime;
- (void)_setTagBuffersWithConversionInformation;
- (void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(double)a0;
- (struct __CVBuffer { } *)copyPixelBufferForItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 itemTimeForDisplay:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1;
- (void)requestNotificationOfMediaDataChangeAsSoonAsPossible;
- (struct __CVBuffer { } *)copyPixelBufferForItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 remove:(BOOL)a1 itemTimeForDisplay:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2;
- (id)init;
- (BOOL)_attachToPlayerItem:(id)a0;
- (BOOL)suppressesPlayerRendering;
- (void)_setTimebase:(struct OpaqueCMTimebase { } *)a0;
- (struct OpaqueFigVisualContext { } *)_visualContext;
- (id)_pixelBufferAttributes;
- (void)_detachFromPlayerItem;
- (void)dealloc;

@end
