@class DASession, NSString;
@protocol PKSessionDelegate;

@interface PKDASession : NSObject <DASessionDelegate, PKSession> {
    _Atomic unsigned int _sessionState;
}

@property (retain, nonatomic) DASession *session;
@property (nonatomic) unsigned long long state;
@property (weak, nonatomic) id<PKSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endSession;
- (void).cxx_destruct;
- (void)dealloc;
- (void)daSession:(id)a0 didEnd:(id)a1;
- (void)daSession:(id)a0 didBecomeActive:(id)a1;
- (id)initWithDelegate:(id)a0;

@end
