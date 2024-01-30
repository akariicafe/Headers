@class AVPlayerItemVideoOutputInternal, NSObject;
@protocol OS_dispatch_queue, AVPlayerItemOutputPullDelegate;

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput {
    AVPlayerItemVideoOutputInternal *_videoOutputInternal;
}

@property (readonly, weak) id<AVPlayerItemOutputPullDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (BOOL)_attachToPlayerItem:(id)a0;
- (void)dealloc;
- (id)init;
- (id)initWithPixelBufferAttributes:(id)a0;
- (struct __CVBuffer { } *)copyPixelBufferForItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 itemTimeForDisplay:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1;
- (BOOL)hasNewPixelBufferForItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct __CVBuffer { } *)_copyPixelBufferForItemTimeWithOptions:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 itemTimeForDisplay:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 options:(unsigned int)a2;
- (void)_detachFromPlayerItem;
- (void)_dispatchOutputMediaDataWillChange;
- (void)_dispatchOutputSequenceWasFlushed;
- (id)_pixelBufferAttributes;
- (void)_respondToPlayerItemFormatDescriptionsChange;
- (void)_setTagBuffersWithConversionInformation;
- (void)_setTimebase:(struct OpaqueCMTimebase { } *)a0;
- (void)_startObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase { } *)a0;
- (void)_stopObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase { } *)a0;
- (struct OpaqueFigVisualContext { } *)_visualContext;
- (long long)clientStateOnRequestedMediaDataChangeNotification;
- (struct __CVBuffer { } *)copyPixelBufferForItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 remove:(BOOL)a1 itemTimeForDisplay:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })earliestAvailablePixelBufferItemTime;
- (id)initWithOutputSettings:(id)a0;
- (void)requestNotificationOfMediaDataChangeAsSoonAsPossible;
- (void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(double)a0;
- (void)setSuppressesPlayerRendering:(BOOL)a0;
- (BOOL)setUpWithOutputSettings:(id)a0 outputSettingsArePixelBufferAttributes:(BOOL)a1 withExceptionReason:(id *)a2;
- (BOOL)suppressesPlayerRendering;

@end
