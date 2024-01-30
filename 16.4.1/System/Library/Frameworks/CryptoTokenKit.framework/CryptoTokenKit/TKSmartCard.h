@class NSMutableDictionary, TKSmartCardSlot, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface TKSmartCard : NSObject {
    NSObject<OS_dispatch_queue> *_beginSessionQueue;
    BOOL _sensitive;
    BOOL _sensitiveRequired;
    BOOL _synchronous;
    id _session;
    long long _sessionCounter;
    BOOL _someoneWantsSession;
    long long _sessionEndPolicy;
    NSMutableDictionary *_contexts;
    NSNumber *_reservationId;
    BOOL _useExtendedLength;
    BOOL _useCommandChaining;
    unsigned char _cla;
}

@property unsigned long long currentProtocol;
@property BOOL valid;
@property (readonly, nonatomic) TKSmartCardSlot *slot;
@property unsigned long long allowedProtocols;
@property BOOL sensitive;
@property (retain) id context;

+ (id)_localizedString:(id)a0;
+ (BOOL)decodeResponse:(id)a0 sw:(unsigned short *)a1 appendTo:(id)a2 error:(id *)a3;

- (void)endSession;
- (void)endSessionWithReply:(id /* block */)a0;
- (id)initWithSlot:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)synchronous;
- (void)setSynchronous:(BOOL)a0;
- (void).cxx_destruct;
- (void)beginSessionWithReply:(id /* block */)a0;
- (void)transmitRequest:(id)a0 reply:(id /* block */)a1;
- (unsigned char)cla;
- (void)setCla:(unsigned char)a0;
- (id)sendIns:(unsigned char)a0 p1:(unsigned char)a1 p2:(unsigned char)a2 data:(id)a3 le:(id)a4 sw:(unsigned short *)a5 error:(id *)a6;
- (BOOL)beginSessionWithError:(id *)a0;
- (id)buildIns:(unsigned char)a0 p1:(unsigned char)a1 p2:(unsigned char)a2 data:(id)a3 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 le:(id)a5 protocol:(unsigned long long)a6 chained:(BOOL)a7 extended:(BOOL *)a8 realLe:(unsigned long long *)a9;
- (BOOL)checkAPDUResponse:(id)a0 error:(id *)a1;
- (id)contextForKey:(id)a0;
- (void)encodeLength:(unsigned long long)a0 into:(id)a1 sized:(long long)a2;
- (void)handleApduResponse:(id)a0 body:(id)a1 le:(unsigned long long)a2 isCase4:(BOOL)a3 error:(id)a4 reply:(id /* block */)a5;
- (BOOL)inSessionWithError:(id *)a0 executeBlock:(id /* block */)a1;
- (void)inSlotQueueExecuteBlock:(id /* block */)a0;
- (void)querySessionWithReply:(id /* block */)a0;
- (void)releaseSessionWithReply:(id /* block */)a0;
- (id)remoteSessionWithErrorHandler:(id /* block */)a0;
- (void)reserveExclusive:(BOOL)a0 reply:(id /* block */)a1;
- (BOOL)revalidate;
- (BOOL)selectApplication:(id)a0 error:(id *)a1;
- (void)sendIns:(unsigned char)a0 p1:(unsigned char)a1 p2:(unsigned char)a2 data:(id)a3 le:(id)a4 reply:(id /* block */)a5;
- (long long)sessionEndPolicy;
- (void)sessionRequested;
- (void)setContext:(id)a0 forKey:(id)a1;
- (void)setSessionEndPolicy:(long long)a0;
- (void)setUseCommandChaining:(BOOL)a0;
- (void)setUseExtendedLength:(BOOL)a0;
- (void)transmitChunkedIns:(unsigned char)a0 p1:(unsigned char)a1 p2:(unsigned char)a2 data:(id)a3 fromOffset:(unsigned long long)a4 realLe:(unsigned long long)a5 chained:(BOOL)a6 isCase4:(BOOL)a7 reply:(id /* block */)a8;
- (void)unreserve;
- (BOOL)useCommandChaining;
- (BOOL)useExtendedLength;
- (id)userInteractionForSecurePINChangeWithPINFormat:(id)a0 APDU:(id)a1 currentPINByteOffset:(long long)a2 newPINByteOffset:(long long)a3;
- (id)userInteractionForSecurePINVerificationWithPINFormat:(id)a0 APDU:(id)a1 PINByteOffset:(long long)a2;

@end
