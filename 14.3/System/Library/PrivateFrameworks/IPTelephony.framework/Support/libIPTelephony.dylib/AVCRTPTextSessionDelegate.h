@class NSString;

@interface AVCRTPTextSessionDelegate : NSObject <AVCTextStreamDelegate>

@property (nonatomic) struct weak_ptr<AVCRTPRTTSession> { struct AVCRTPRTTSession *__ptr_; struct __shared_weak_count *__cntrl_; } owner;
@property (nonatomic) struct shared_ptr<AVCRTPStackController> { struct AVCRTPStackController *__ptr_; struct __shared_weak_count *__cntrl_; } stackController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)streamDidStop:(id)a0;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)stream:(id)a0 didPause:(BOOL)a1 error:(id)a2;
- (void)stream:(id)a0 didResume:(BOOL)a1 error:(id)a2;
- (void)streamDidRTPTimeOut:(id)a0;
- (void)streamDidRTCPTimeOut:(id)a0;
- (void)stream:(id)a0 didReceiveRTCPPackets:(id)a1;
- (void)streamDidServerDie:(id)a0;
- (id)initWithOwner:(struct shared_ptr<AVCRTPRTTSession> { struct AVCRTPRTTSession *x0; struct __shared_weak_count *x1; })a0 andStackController:(struct shared_ptr<AVCRTPStackController> { struct AVCRTPStackController *x0; struct __shared_weak_count *x1; })a1;

@end
