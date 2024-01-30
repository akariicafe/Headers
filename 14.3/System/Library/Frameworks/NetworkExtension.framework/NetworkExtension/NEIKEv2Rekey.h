@class NSString, PCSimpleTimer;

@interface NEIKEv2Rekey : NSObject <NSObject>

@property (retain) PCSimpleTimer *ikeLifetime;
@property (retain) PCSimpleTimer *childLifetime;
@property int ikeLifetimeMinutes;
@property int childLifetimeMinutes;
@property (copy) id /* block */ ikeRekeyHandler;
@property (copy) id /* block */ childRekeyHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)clearTimers;
- (void)startIKETimer:(int)a0 timeoutHandler:(id /* block */)a1;
- (void)startChildTimer:(int)a0 timeoutHandler:(id /* block */)a1;
- (void)invokeIKERekeyHandler;
- (void)invokeChildRekeyHandler;

@end
