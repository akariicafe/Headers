@class NSURL, _TtC34SiriCrossDeviceArbitrationFeedback19FeedbackServiceImpl;
@protocol _TtP34SiriCrossDeviceArbitrationFeedback7Globals_;

@interface SiriCrossDeviceArbitrationFeedback.FeedbackServiceImpl : NSObject <SiriCrossDeviceArbitrationFeedback.FeedbackService> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_userfeedbackController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_notificationService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_globals;
}

@property (class, nonatomic, readonly) _TtC34SiriCrossDeviceArbitrationFeedback19FeedbackServiceImpl *sharedService;
@property (class, nonatomic, readonly) NSURL *receivedArbitrationsDirectoryURL;

@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, retain) id<_TtP34SiriCrossDeviceArbitrationFeedback7Globals_> globals;

- (void)handleWithResponse:(id)a0 completion:(id /* block */)a1;
- (id)roomNameHashFromRoomName:(id)a0 globals:(id)a1;
- (void)add:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)handleAssistantDismissed;

@end
