@class NSArray, NSMutableDictionary, IMPowerAssertion, NSDate, NSMutableArray;

@interface IMAVCallManager : NSObject {
    IMPowerAssertion *_powerAssertion;
    NSMutableArray *_chatArray;
    NSMutableArray *_acChatProxyArray;
    NSMutableArray *_avChatProxyArray;
    NSMutableDictionary *_guidToACChatProxyMap;
    NSMutableDictionary *_guidToAVChatProxyMap;
    NSDate *_lastCallStateChange;
    int _avToken;
    int _acToken;
    unsigned int _avCallState;
    unsigned int _acCallState;
    unsigned int _globalCallState;
}

@property (readonly, nonatomic) NSArray *_FTCalls;
@property (readonly, nonatomic) unsigned int callState;
@property (readonly, nonatomic) BOOL hasActiveCall;
@property (readonly, nonatomic) NSArray *calls;

+ (id)sharedInstance;

- (void)_sendProxyUpdate;
- (id)init;
- (void).cxx_destruct;
- (id)_copyMutableFTCalls;
- (void)_setAVCallState:(unsigned int)a0 quietly:(BOOL)a1;
- (id)_activeAudioCall;
- (void)_updateACCallState;
- (id)_nonRetainingChatList;
- (unsigned int)_callStateForType:(unsigned int)a0;
- (void)_setACCallState:(unsigned int)a0;
- (id)_mutableFTCalls;
- (void)_postStateChangeIfNecessary;
- (BOOL)_hasActiveFaceTimeCall;
- (void)_addACChatProxy:(id)a0;
- (BOOL)_hasActiveAudioCall;
- (void)_postStateChangeNamed:(id)a0 fromState:(unsigned int)a1 toState:(unsigned int)a2 postType:(BOOL)a3 type:(unsigned int)a4;
- (void)_setACCallState:(unsigned int)a0 quietly:(BOOL)a1;
- (void)_updateAVChatProxyWithInfo:(id)a0;
- (void)_addIMAVChatToChatList:(id)a0;
- (void)_updateAVCallState;
- (void)_updateOverallChatState;
- (void)_removeIMAVChatFromChatList:(id)a0;
- (void)_addAVChatProxy:(id)a0;
- (id)_activeFaceTimeCall;
- (void)_updateACChatProxyWithInfo:(id)a0;
- (unsigned int)_callState;
- (id)_calls;
- (void)_setAVCallState:(unsigned int)a0;

@end
