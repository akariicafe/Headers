@class NSArray, NSObject, SYShowBacklinkIndicatorCommand;
@protocol OS_dispatch_queue, SYBacklinkMonitorOperationDelegate, SYBacklinkMonitorOperationDelegate_Testing, SYUserActivityInfo;

@interface SYBacklinkMonitorOperation : NSObject

@property (retain, nonatomic) NSArray *_testingForcedFoundDomainIdentifiers;
@property (retain, nonatomic) NSArray *_testingForcedFoundLinkedIdentifiers;
@property (readonly, nonatomic) long long _operationState;
@property (retain, nonatomic) id<SYUserActivityInfo> inputUserActivityInfo;
@property (nonatomic, setter=_setOperationState:) long long _operationState;
@property (retain, nonatomic) NSArray *_testingForcedFoundDomainIdentifiers;
@property (retain, nonatomic) NSArray *_testingForcedFoundLinkedIdentifiers;
@property (readonly, weak, nonatomic) id<SYBacklinkMonitorOperationDelegate_Testing> _testingDelegate;
@property (retain, nonatomic) SYShowBacklinkIndicatorCommand *_indicatorCommand;
@property (readonly, weak, nonatomic) id<SYBacklinkMonitorOperationDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, nonatomic) id<SYUserActivityInfo> inputUserActivityInfo;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) long long type;

- (id)description;
- (void).cxx_destruct;
- (void)beginProcessing;
- (void)_finishProcessingAndNotify;
- (void)_searchBacklinksForInputUserActivity;
- (void)_showOrHideBacklinkIndicatorForDomainIdentifiers:(id)a0 linkedIdentifiers:(id)a1;
- (id)initWithDelegate:(id)a0 processingQueue:(id)a1 inputUserActivityInfo:(id)a2 processIdentifier:(int)a3;

@end
