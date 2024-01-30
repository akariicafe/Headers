@class NSString, NSTimer, NSMutableArray, NFStateMachine;

@interface SWTimeoutManager : NSObject <SWMessageHandler, SWTimeoutManager>

@property (readonly, nonatomic) NSMutableArray *timeoutBlocks;
@property (readonly, nonatomic) NFStateMachine *stateMachine;
@property (retain, nonatomic) NSTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
