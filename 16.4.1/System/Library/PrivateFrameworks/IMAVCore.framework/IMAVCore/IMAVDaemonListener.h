@class NSMutableArray;

@interface IMAVDaemonListener : NSObject {
    NSMutableArray *_handlers;
    BOOL _postedSetupComplete;
}

@property (readonly, nonatomic) BOOL isSetupComplete;

- (void)setupComplete:(BOOL)a0 info:(id)a1;
- (void)removeHandler:(id)a0;
- (void)_noteDisconnected;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)init;
- (void)addHandler:(id)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
