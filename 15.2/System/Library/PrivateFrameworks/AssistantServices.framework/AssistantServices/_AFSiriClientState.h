@class NSMutableSet;

@interface _AFSiriClientState : NSObject {
    NSMutableSet *_requestUUIDs;
}

@property (nonatomic) BOOL hasActiveSession;
@property (nonatomic) BOOL isListening;
@property (nonatomic) BOOL isSpeaking;
@property (readonly, nonatomic) unsigned long long notifyState;

- (void)removeRequestUUID:(id)a0;
- (void)addRequestUUID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
