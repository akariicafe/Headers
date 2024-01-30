@class NSArray, NSMutableArray, CAMStillImageCaptureRequest;

@interface CAMCaptureRequestInfo : NSObject

@property (readonly, nonatomic) NSMutableArray *_receivedCallbacks;
@property (readonly, nonatomic) unsigned long long _userInitiationTime;
@property (readonly, nonatomic) CAMStillImageCaptureRequest *request;
@property (readonly, nonatomic) NSArray *callbackReceipts;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveCallback:(long long)a0;

@end
