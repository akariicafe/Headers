@class BSMachPortTransferableSendRight, NSString, NSArray, BSAuditHistory, BSMachPortReceiveRight, BSActionResponse, BSSettings, BSPortDeathSentinel, BSActionListenerToken, NSObject, BSTimer;
@protocol OS_dispatch_queue;

@interface BSAction : NSObject <BSXPCCoding, NSSecureCoding, BSSettingDescriptionProvider, BSDebugDescriptionProviding, BSInvalidatable> {
    unsigned long long _timeout;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _queue_handler;
    BSActionListenerToken *_queue_listenerToken;
    BSTimer *_queue_timer;
    id /* block */ _queue_invalidationHandler;
    BSActionResponse *_queue_response;
    BSAuditHistory *_queue_auditHistory;
    BSMachPortReceiveRight *_queue_receiveRight;
    BSMachPortTransferableSendRight *_queue_sendRight;
    BSPortDeathSentinel *_queue_portDeathSentinel;
    NSArray *_queue_neuteredCallStack;
    BOOL _hasTimeout;
    BOOL _originatingAction;
    BOOL _queue_hasBeenNeuteredForEncode;
    BOOL _queue_hasBeenNeuteredForSend;
    BOOL _queue_invalidated;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_expectsResponse) BOOL expectsResponse;
@property (readonly, copy, nonatomic) BSSettings *info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0;
- (void)sendResponse:(id)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)init;
- (void)sendResponse:(id)a0 withCompletion:(id /* block */)a1;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (BOOL)isValid;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)canSendResponse;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)setInvalidationHandler:(id /* block */)a0;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;

@end
