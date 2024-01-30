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

- (id)_calls;
- (void)_postStateChangeIfNecessary;
- (id)_copyMutableFTCalls;
- (id)_mutableFTCalls;
- (void)_updateOverallChatState;
- (void)_removeIMAVChatFromChatList:(id)a0;
- (void)_addACChatProxy:(id)a0;
- (void)_setAVCallState:(unsigned int)a0;
- (void)_addIMAVChatToChatList:(id)a0;
- (void)_setACCallState:(unsigned int)a0 quietly:(BOOL)a1;
- (void)_updateAVCallState;
- (void)_updateAVChatProxyWithInfo:(id)a0;
- (id)_nonRetainingChatList;
- (void)_setACCallState:(unsigned int)a0;
- (unsigned int)_callState;
- (void)_setAVCallState:(unsigned int)a0 quietly:(BOOL)a1;
- (void)_sendProxyUpdate;
- (id)_activeAudioCall;
- (BOOL)_hasActiveFaceTimeCall;
- (BOOL)_hasActiveAudioCall;
- (id)init;
- (void)_updateACChatProxyWithInfo:(id)a0;
- (unsigned int)_callStateForType:(unsigned int)a0;
- (void)_postStateChangeNamed:(id)a0 fromState:(unsigned int)a1 toState:(unsigned int)a2 postType:(BOOL)a3 type:(unsigned int)a4;
- (void)_addAVChatProxy:(id)a0;
- (id)_activeFaceTimeCall;
- (void).cxx_destruct;
- (void)_updateACCallState;

@end
