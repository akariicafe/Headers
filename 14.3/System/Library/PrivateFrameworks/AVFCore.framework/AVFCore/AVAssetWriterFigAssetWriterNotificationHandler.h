@class AVWeakReference;
@protocol AVAssetWriterFigAssetWriterNotificationHandlerDelegate;

@interface AVAssetWriterFigAssetWriterNotificationHandler : NSObject {
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    int _didNotCallDelegate;
    AVWeakReference *_weakReferenceToSelf;
    int _notificationHandlersAreRegistered;
}

@property (retain, getter=_weakReferenceToDelegate, setter=_setWeakReferenceToDelegate:) AVWeakReference *weakReferenceToDelegate;
@property (weak) id<AVAssetWriterFigAssetWriterNotificationHandlerDelegate> delegate;

- (void)_handleServerDiedNotification;
- (void)dealloc;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0;
- (void)_handleCompletedWritingNotification;
- (void)_teardownNotificationHandlers;
- (void)_callDelegateIfNotCalledWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_handleFailedNotificationWithError:(id)a0;

@end
