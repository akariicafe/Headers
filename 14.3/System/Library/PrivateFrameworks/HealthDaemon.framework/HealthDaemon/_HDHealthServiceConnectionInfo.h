@class NSData, NSUUID, NSObject;
@protocol OS_dispatch_source;

@interface _HDHealthServiceConnectionInfo : NSObject

@property (nonatomic) unsigned long long sessionIdentifier;
@property (readonly, nonatomic) id /* block */ sessionHandler;
@property (readonly, nonatomic) id /* block */ dataHandler;
@property (readonly, nonatomic) id /* block */ characteristicsHandler;
@property (readonly, nonatomic) id /* block */ mfaSuccessHandler;
@property (readonly, nonatomic) unsigned long long connectionOptions;
@property (readonly, nonatomic) long long mfaStatus;
@property (readonly, nonatomic) NSData *autoPairData;
@property (readonly, nonatomic) NSUUID *peripheralUUID;
@property (nonatomic) long long connectionState;
@property (nonatomic) long long pairingState;
@property (readonly, nonatomic) double timeoutInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (nonatomic) BOOL pairingAttempted;

- (void).cxx_destruct;
- (id)initWithSessionHandler:(id /* block */)a0 dataHandler:(id /* block */)a1 characteristicsHandler:(id /* block */)a2 mfaSuccessHandler:(id /* block */)a3 autoPairData:(id)a4 connectionOptions:(unsigned long long)a5 timeoutInterval:(double)a6 peripheralUUID:(id)a7;
- (void)markMFAStatusComplete;

@end
