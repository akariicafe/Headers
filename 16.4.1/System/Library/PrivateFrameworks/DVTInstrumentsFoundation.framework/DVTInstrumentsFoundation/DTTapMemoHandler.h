@class DTTapConfig, NSObject;
@protocol OS_dispatch_queue, DTTapMemoHandlerDelegate;

@interface DTTapMemoHandler : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _sentRecordingInfo;
    id<DTTapMemoHandlerDelegate> _delegate;
}

@property (readonly, retain, nonatomic) DTTapConfig *config;

- (void)suspend;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithConfig:(id)a0 delegate:(id)a1;
- (id)handleMemo:(id)a0;

@end
