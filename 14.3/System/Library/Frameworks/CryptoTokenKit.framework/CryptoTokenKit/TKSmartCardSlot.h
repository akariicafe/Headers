@class TKSmartCardATR, TKSmartCardSlotProxy, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface TKSmartCardSlot : NSObject {
    NSXPCConnection *_connection;
}

@property long long state;
@property (retain) TKSmartCardATR *ATR;
@property (readonly, nonatomic) TKSmartCardSlotProxy *proxy;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property long long previousState;
@property long long shareState;
@property long long powerState;
@property BOOL securePINVerificationSupported;
@property BOOL securePINChangeSupported;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long maxInputLength;
@property (readonly, nonatomic) long long maxOutputLength;

- (id)screen;
- (void).cxx_destruct;
- (void)connectToEndpoint:(id)a0 synchronous:(BOOL)a1 reply:(id /* block */)a2;
- (id)initWithEndpoint:(id)a0 error:(id *)a1;
- (void)getAttrib:(unsigned int)a0 reply:(id /* block */)a1;
- (void)setAttrib:(unsigned int)a0 data:(id)a1 reply:(id /* block */)a2;
- (id)synchronous:(BOOL)a0 remoteSlotWithErrorHandler:(id /* block */)a1;
- (id)makeSmartCard;
- (void)control:(id)a0 data:(id)a1 expectedLength:(unsigned int)a2 reply:(id /* block */)a3;
- (id)userInteractionForConfirmation;
- (id)userInteractionForStringEntry;
- (void)dealloc;
- (id)description;
- (void)invalidate;

@end
