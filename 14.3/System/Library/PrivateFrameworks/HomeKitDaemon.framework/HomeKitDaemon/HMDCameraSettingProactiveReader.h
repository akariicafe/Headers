@class NSSet, NSString, HMDAccessory, NSObject, HMFMessage;
@protocol OS_dispatch_queue, HMDCameraSettingProactiveReaderDelegate;

@interface HMDCameraSettingProactiveReader : HMFObject <HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) id<HMDCameraSettingProactiveReaderDelegate> delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) NSSet *streamControlMessageHandlers;
@property (readonly) NSString *logIdentifier;
@property (readonly, weak) HMDAccessory *accessory;
@property (retain) HMFMessage *pendingMessage;
@property (readonly) NSString *sessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)handleMessage:(id)a0;
- (void)_handleStreamStatusMultireadResponse:(id)a0;
- (void)_callDidCompleteReadDelegateCallback;
- (id)_availableStreamControlMessageHandlersForReadResponses:(id)a0;
- (id)_inUseStreamControlMessageHandlersForReadResponses:(id)a0;
- (id)_streamingStatusForResponse:(id)a0;
- (id)initWithWorkQueue:(id)a0 accessory:(id)a1 delegate:(id)a2 delegateQueue:(id)a3 message:(id)a4 streamMessageHandlers:(id)a5 logID:(id)a6;
- (BOOL)hasPendingNegotiateMessageForSessionWithIdentifier:(id)a0;
- (void)readSetting;

@end
